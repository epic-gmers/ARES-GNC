#include "StateManager.h"

void StateManager::swithState(SystemState newState)
{
    currentState = newState;
    switch (currentState)
    {
        case NAVIGATION:
            // Code to initiate navigation
            break;
        case DATA_COLLECTION:
            // Code to initiate sensor data collection
            break;
        case ERROR:
            // Code to handle errors
            break;
        case IDLE:
            break;
        default:
            break;
    }
}