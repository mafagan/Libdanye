#ifndef _UTIL_H_
#define _UTIL_H_

#include<stdio.h>

namespace danye{

    class noncpyable{
        protected:

            noncpyable(){}
            ~noncpyable(){}

        private:

            noncpyable(const noncpyable &){}
            const noncpyable& operator=(const noncpyable&){}
    }
}
#endif
