#ifndef _DATABASE_H_
#define _DATABASE_H_


#include "Event.hpp"

#include <queue>
#include <vector>

class DataBase{
private:

public:
    DataBase();

    bool addEvent(Event *ePtr);

    bool removeEvent(Event *ePtr);
};


#endif
