#include <Arduino.h>

#include "MotorControl.h"

void MotorControl::driveForward(float speed)
{
    uint8_t MOTOR_PIN = 0;
    analogWrite(MOTOR_PIN, speed);
}

void MotorControl::driveBackward(float speed)
{
    uint8_t MOTOR_PIN = 0;
    analogWrite(MOTOR_PIN, -speed);
}

void MotorControl::turn(float degrees)
{

}

void MotorControl::stop()
{
    uint8_t MOTOR_PIN = 0;
    analogWrite(MOTOR_PIN, 0);
}