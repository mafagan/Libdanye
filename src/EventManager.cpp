#include "EventManager.hpp"


EventManager::EventManager(){}

EventManager* EventManager::GetInstance()
{
    return emInstance;
}


void EventManager::run()
{

}

EventManager* EventManager::emInstance = new EventManager;
