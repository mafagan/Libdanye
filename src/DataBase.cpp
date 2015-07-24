#include "DataBase.hpp"

DataBase::DataBase(Configuration *cfg)
{
    this->dy_epoll = new Epoll(cfg->get_max_fd_size());
}

bool DataBase::addEvent(Event *ePtr)
{

    return true;
}

bool DataBase::removeEvent(Event *ePtr)
{
    return true;
}
