#ifndef _CONFIGURATION_H_
#define _CONFIGURATION_H_

struct Configuration{
    int max_fd_size;

    Configuration():max_fd_size(1024){}
};

#endif
