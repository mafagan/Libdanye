#ifndef _EPOLL_H_
#define _EPOLL_H_

#include <thread>

class Epoll{
private:
    int epfd;
    int maxfdSize;

    struct epoll_event *ev;
public:
    Epoll(int size);
    int ctl(int op, int fd);
    int wait(int maxevents, int timeout);
    epoll_event* getEvents();
};

#endif
