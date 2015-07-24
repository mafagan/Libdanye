#ifndef _UTIL_H_
#define _UTIL_H_

#include<stdio.h>


class noncpyable{
protected:

    noncpyable(){}
    ~noncpyable(){}

private:

    noncpyable(const noncpyable &);
    const noncpyable& operator=(const noncpyable&);
};

bool make_socket_non_blocking(int fd);

#endif
