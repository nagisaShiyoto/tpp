#include "mul_table.h"
#include <iostream>

void printMultiplyTable(int startValue, int endValue) {
    int result = 0;
    // the largest number has the largest digit amount so he also have the largest needed space to print
    int highestSpaceAmount = static_cast<int>(std::log10(endValue * endValue)) + 1;

    for (int i = startValue; i <= endValue; i++) {
        for (int j = startValue; j <= endValue; j++) {
            result = i * j;
            std::cout << result;
            printPaddingSpaces(highestSpaceAmount, result);
        }
        std::cout << std::endl;
    }
}


void printPaddingSpaces(int highestSpaceNumber, int result) {
    int spaceTaken = static_cast<int>(std::log10(result));
    for (int i = spaceTaken; i < highestSpaceNumber; i++) {
        std::cout << " ";
    }
}
