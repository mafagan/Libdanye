#ifndef _EVMANAGER_
#define _EVMANAGER_

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

class EventManager:public noncpyable{
private:
    Configuration cfg;

    Epoll *dy_epoll;
    std::list<Event*> *ready_list;
    std::vector<EventTimer*> *timerHeap;

    EventManager();
    static EventManager *emInstance;


public:
    static EventManager* GetInstance();

    void init(Configuration *cfg);

    bool eventTimerRegister(EventTimer *eptr);

    int getNextTimeout();
    void run();
};


#endif
