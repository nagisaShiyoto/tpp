#include <iostream>
#include "LinkedMemory.h"

int main()
{
    new int[12];
    new char[123];
    new float[11];

    LinkedMemory::printMemoryData();
}