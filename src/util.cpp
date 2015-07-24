
#include "util.hpp"

#include <unistd.h>
#include <fcntl.h>

noncpyable::noncpyable(const noncpyable &){}

const noncpyable& noncpyable::operator=(const noncpyable&)
{
    return *this;
}

bool make_socket_non_blocking(int fd)
{
    int flags, s;
    flags = fcntl(fd, F_GETFL, 0);

    if(flags == -1)
    {
        perror("fcntl");
        return false;
    }

    flags |= O_NONBLOCK;

    s = fcntl(fd, F_SETFL, flags);

    if(s == -1)
    {
        perror("F_SETFL");
        return false;
    }

    return true;
}

