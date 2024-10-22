#include <Arduino.h>

#include "CommunicationSystem.h"

CommunicationSystem::CommunicationSystem()
{

}

void CommunicationSystem::transmitData(char* data)
{
    Serial.println(data); // Send data over serial (to XBee)
}

void CommunicationSystem::recieveBeaconData()
{
    float heading = 0.0; // Placeholder for heading collection
    float distance = 0.0; // Placeholder for distance collection
}