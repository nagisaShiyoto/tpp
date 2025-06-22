#include <iostream>
#include "LinkedMemory.h"

int main()
{
    int* test0 = new int;
    char* test1 = new char[123];
    float* test2 = new float[11];
    int* test3 = new int[11];
    float* test4 = new float[11];
    float* test5 = NULL;
    LinkedMemory::printMemoryData();
    delete[] test1;
    std::cout << std::endl << std::endl << std::endl << std::endl << std::endl << std::endl << std::endl;
    LinkedMemory::printMemoryData();
    delete[] test4;
    std::cout << std::endl << std::endl << std::endl << std::endl << std::endl << std::endl << std::endl;
    LinkedMemory::printMemoryData();
    delete test0;
    std::cout << std::endl << std::endl << std::endl << std::endl << std::endl << std::endl << std::endl;
    LinkedMemory::printMemoryData();
}