
#include "Logging.hpp"

using namespace danye;

Logging::Logging()
{
}

inline void Logging::log(LOG_TYPE type, LOG_LEVEL level, string data)
{
    static const char* const level_buffer[] = {"INFO", "DEBUG", "WARN", "ERROR"};

    if(type == LOG){

    }else if(type == FILE_LOG){

    }else if(type == SYS_LOG){

    }else{

    }
}

Logging::~Logging()
{

}
