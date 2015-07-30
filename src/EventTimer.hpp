#ifndef _EVENTTIMER_H_
#define _EVENTTIMER_H_

#include "Event.hpp"

#include <ctime>

class EventTimer{
private:
    timeval timer;
    void (*cb)(int, short, void*);
    void *arg;
    bool initialized;

public:
    EventTimer(timeval tv):timer(tv),initialized(false){}
    timeval getTimer();
    void setCb(void (*cb)(int, short, void *), void *);
    void setTimer(timeval tv);
    void delev();
};

#endif
