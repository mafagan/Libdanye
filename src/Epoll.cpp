#include "Epoll.hpp"

#include <assert.h>
#include <iostream>
#include <sys/epoll.h>

Epoll::Epoll(int maxfdSize)
{
    assert(maxfdSize>0);
    this->epfd = epoll_create(maxfdSize);
    assert(this->epfd>0);
    this->maxfdSize = maxfdSize;

    this->ev = new epoll_event[maxfdSize];
    assert(this->ev);
}

int Epoll::ctl(int op, int fd)
{
    return epoll_ctl(this->epfd, op, fd, this->ev);
}

int Epoll::wait(int maxevents, int timeout)
{
    return epoll_wait(this->epfd, this->ev, maxevents, timeout);
}


epoll_event* Epoll::getEvents()
{
    return this->ev;
}
