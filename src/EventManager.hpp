#include "Event.hpp"
#include "util.hpp"

class EventManager:public noncpyable{
private:

    EventManager();
    static EventManager *emInstance;

public:
    static EventManager* GetInstance();

    bool eventRegister(Event *eptr);

    bool eventCancel(Event *eptr);

    void run();
};
