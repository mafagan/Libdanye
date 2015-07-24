#include "Configuration.hpp"

Configuration::Configuration()
{
    this->max_fd_size = 1024;
}

void Configuration::set_max_fd_size(int max_fd_size)
{
    this->max_fd_size = max_fd_size;
}

int Configuration::get_max_fd_size()
{
    return this->max_fd_size;
}
