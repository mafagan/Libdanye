#ifndef _EVENT_H_
#define _EVENT_H_

class Event{
protected:
    int kind_id;
    int event_id;

public:
    const static int SIGNAL = 1;
    const static int TIMER = 2;
    const static int IO = 3;

    virtual int getKindId()=0;
    virtual ~Event()=0;
};


#endif
