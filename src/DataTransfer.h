#ifndef DATA_TRANSFER_H
#define DATA_TRANSFER_H

class DataTransfer 
{
public:
    DataTransfer();
    void packDataToCSV(char* result, const char* data[], int length);
    void unpackCSVData(const char* csvData, char* outputArray[], int& length);
    void dataCollection();
};

#endif
