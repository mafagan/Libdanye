#ifndef _DATABASE_H_
#define _DATABASE_H_


#include "Event.hpp"
#include "Epoll.hpp"
#include "Configuration.hpp"

#include <queue>
#include <vector>

#ifndef DY_FD_MAX
#define DY_FD_MAX 1024
#endif

class DataBase{
private:
    Epoll *dy_epoll;
public:
    DataBase(Configuration *cfg);

    bool addEvent(Event *ePtr);

    bool removeEvent(Event *ePtr);
};


#endif
