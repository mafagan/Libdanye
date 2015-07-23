
class EventManager{
private:
    EventManager();
    static EventManager *emInstance;

public:
    static EventManager* GetInstance();

    bool eventRegister();

    bool eventCancel();
};
