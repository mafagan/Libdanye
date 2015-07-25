#ifndef _EVENTTIMER_H_
#define _EVENTTIMER_H_

#include "Event.hpp"

#include <ctime>

class EventTimer{
private:
    timeval timer;
public:
    EventTimer(timeval tv):timer(tv){}
    timeval getTimer();
};

#endif
