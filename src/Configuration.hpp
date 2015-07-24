#ifndef _CONFIGURATION_H_
#define _CONFIGURATION_H_

class Configuration{
private:
    int max_fd_size;
public:
    Configuration();

    void set_max_fd_size(int max_fd_size);
    int get_max_fd_size();
};

#endif
