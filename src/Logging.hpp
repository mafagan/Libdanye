#ifndef _LOGGING_H_
#define _LOGGING_H_

#include <cstring>
#include <iostream>
#include <fstream>

#include <unistd.H>
#include "util.h"

using namespace std;

enum LOG_LEVEL{
    INFO,
    DUBUG,
    WARN,
    ERROR
};

enum LOG_TYPE{
    LOG,
    FILE_LOG,
    SYS_LOG
};

class Logging {
public:
    Logging();

    inline void log(LOG_TYPE type, LOG_LEVEL level, string data);

    ~Logging();
private:
    Logging(const Logging &other);

    int log_fd;
    int file_fd;
    int sysfile_fd;

    //TODO
};

#endif
