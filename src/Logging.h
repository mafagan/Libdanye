#ifndef _LOGGING_H_
#define _LOGGING_H_

#include "util.h"

namespace danye
{
    class Logging : danye::noncpyable
    {
    public:
        Logging();
        ~Logging();
    private:
        int _msgCount;

        //TODO
    };
}

#endif
