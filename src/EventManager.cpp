#include "EventManager.hpp"


EventManager::EventManager(){}

EventManager* EventManager::GetInstance()
{
    return emInstance;
}

void EventManager::init(Configuration *cfg)
{
    this->cfg = *cfg;
    this->dy_epoll = new Epoll(cfg->max_fd_size);
    this->ready_list = new std::list<Event*>;
    this->timerHeap = new std::vector<EventTimer*>;
    this->loop_flag = ATOMIC_FLAG_INIT;
}

bool EventManager::eventTimerRegister(EventTimer *ePtr)
{
    this->timerHeap->push_back(ePtr);

    timeval curTimer = ePtr->getTimer();
    int pos = timerHeap->size() - 1;

    while(pos>0){
        int dadPos = pos >> 2;
        timeval dadTimer = timerHeap->at(dadPos)->getTimer();

        if(dadTimer.tv_sec<curTimer.tv_sec ||
                (dadTimer.tv_usec==curTimer.tv_sec &&
                 dadTimer.tv_usec>curTimer.tv_usec)){

            EventTimer *timerPtr = ePtr;
            (*timerHeap)[pos] = timerHeap->at(dadPos);
            (*timerHeap)[dadPos] = timerPtr;

           pos = pos >> 2;
        }else{
            break;
        }
    }

    return true;
}


int EventManager::getNextTimeout()
{
    return 0;
}

void EventManager::run()
{
    loop_flag.test_and_set();

    while(!loop_flag.test_and_set()){
        dy_epoll->wait(cfg.max_fd_size, getNextTimeout());

    }

}

void EventManager::stop()
{
    //TODO
}

EventManager* EventManager::emInstance = new EventManager;
