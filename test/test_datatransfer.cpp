#include <Arduino.h>
#include <unity.h>

#include "DataTransfer.h"

DataTransfer dt;

// Test for packDataToCSV
void test_packDataToCSV() 
{
    const char* data[] = {"23.5", "12.1", "75.0"};
    char packedCSV[128];

    dt.packDataToCSV(packedCSV, data, 3);

    TEST_ASSERT_EQUAL_STRING("23.5,12.1,75.0", packedCSV);  // Test if CSV string is correct
}

// Test for unpackCSVData
void test_unpackCSVData() 
{
    char* unpackedData[3];
    char unpacked1[16], unpacked2[16], unpacked3[16];
    unpackedData[0] = unpacked1;
    unpackedData[1] = unpacked2;
    unpackedData[2] = unpacked3;
    int length;

    dt.unpackCSVData("23.5,12.1,75.0", unpackedData, length);

    TEST_ASSERT_EQUAL_STRING("23.5", unpackedData[0]);  // Test the first unpacked value
    TEST_ASSERT_EQUAL_STRING("12.1", unpackedData[1]);  // Test the second unpacked value
    TEST_ASSERT_EQUAL_STRING("75.0", unpackedData[2]);  // Test the third unpacked value
}

void setup() 
{
    // Initialize testing framework
    UNITY_BEGIN();

    // Run the test cases
    RUN_TEST(test_packDataToCSV);
    RUN_TEST(test_unpackCSVData);

    // Finish test
    UNITY_END();
}

void loop() 
{
}
