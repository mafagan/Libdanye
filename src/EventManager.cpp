#include "EventManager.hpp"


EventManager::EventManager(){}

EventManager* EventManager::GetInstance()
{
    return emInstance;
}

EventManager* EventManager::emInstance = new EventManager;
