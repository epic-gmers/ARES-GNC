#include <Arduino.h>
#include <string.h>

#include "DataTransfer.h"

DataTransfer::DataTransfer() {
    // constructor logic if needed
}

void DataTransfer::packDataToCSV(char* result, const char* data[], int length) {
    result[0] = '\0'; 
    for (int i = 0; i < length; i++) {
        strcat(result, data[i]);
        if (i < length - 1) {
            strcat(result, ",");
        }
    }
}

void DataTransfer::unpackCSVData(const char* csvData, char* outputArray[], int& length) {
    char buffer[128];
    strcpy(buffer, csvData);

    char* token = strtok(buffer, ",");
    length = 0;

    while (token != NULL) {
        strcpy(outputArray[length], token);
        length++;
        token = strtok(NULL, ",");
    }
}

void DataTransfer::dataCollection()
{
    float temperature = analogRead(A0); // Mock sensor reading
    float windSpeed = analogRead(A0);
}