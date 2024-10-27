#ifndef MOTOR_CONTROL
#define MOTOR_CONTROL

class MotorControl
{
public:
    void driveForward(float speed);
    void driveBackward(float speed);
    void turn(float degrees);
    void stop();
};

#endif