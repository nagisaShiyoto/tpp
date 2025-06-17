#include "mul_table.h"
#include <iostream>

void printMultiplyTable(int startValue, int endValue) {
    int result = 0;
    // the largest number has the largest digit amount so he also have the largest needed space to print
    int highestSpaceAmount = digitAmount(endValue * endValue) + 1;

    for (int i = startValue; i <= endValue; i++) {
        for (int j = startValue; j <= endValue; j++) {
            result = i * j;
            std::cout << result;
            printSpaces(highestSpaceAmount, result);
        }
        std::cout << std::endl;
    }
}


void printSpaces(int highestSpaceNumber, int result) {
    int spaceTaken = digitAmount(result);
    int space_amount = highestSpaceNumber - spaceTaken;
    for (int i = 0; i < space_amount; i++) {
        std::cout << " ";
    }
}


int digitAmount(int result) {
    int counter = 0;

    while (result > 0) {
        counter++;
        result /= 10;
    }
    return counter;
}
