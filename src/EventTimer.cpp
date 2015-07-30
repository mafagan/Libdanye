#include "EventTimer.hpp"

timeval EventTimer::getTimer()
{
    return this->timer;
}


void EventTimer::setCb(void (*cb)(int, short, void *), void *arg)
{
    this->cb = cb;
    this->arg = arg;
    this->initialized = true;
}

void EventTimer::setTimer(timeval tv)
{
    this->timer = tv;
}

void EventTimer::delev()
{
    this->initialized = false;
}
