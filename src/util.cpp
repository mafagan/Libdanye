
#include "util.hpp"


noncpyable::noncpyable(const noncpyable &){}

const noncpyable& noncpyable::operator=(const noncpyable&)
{
    return *this;
}
