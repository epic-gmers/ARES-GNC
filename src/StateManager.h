#ifndef STATE_MANAGER
#define STATE_MANAGER

class StateManager
{
public:
    enum SystemState { IDLE, NAVIGATION, DATA_COLLECTION, ERROR };
    void swithState(SystemState newState);

private:
    SystemState currentState;

};

#endif