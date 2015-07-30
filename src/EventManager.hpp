#ifndef _EVMANAGER_H_
#define _EVMANAGER_H_

#include "Event.hpp"
#include "util.hpp"
#include "Epoll.hpp"
#include "Configuration.hpp"
#include "EventTimer.hpp"

#include <iostream>
#include <list>
#include <sys/epoll.h>
#include <vector>
#include <ctime>
#include <atomic>

class EventManager:public noncpyable{
private:
    Configuration cfg;

    Epoll *dy_epoll;
    std::list<Event*> *ready_list;
    std::vector<EventTimer*> *timerHeap;

    std::atomic_flag loop_flag;

    /* constructor */
    EventManager();
    static EventManager *emInstance;


public:
    static EventManager* GetInstance();

    void init(Configuration *cfg);

    bool eventTimerRegister(EventTimer *eptr);

    int getNextTimeout();
    void run();

    void stop();
};


#endif
