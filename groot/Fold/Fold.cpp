#include <iostream>

#define STANDART_START 1
#define STANDART_END 10

void printMultiplyTable(int start_value, int end_value);
void printSpaces(int highest_spcace_number, int result);
int digitAmount(int result);

int main() {
    printMultiplyTable(STANDART_START, STANDART_END);
}

/* 
print the multiplication table from start_value to end_value

@param startValue [IN] the smallest multiplication value in the table
@param endValue [IN] the biggest multiplication value in the table
*/
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

/*
print padding spaces to have fixed print size to every num

@param highestSpaceNumber [IN] the fixed space to every number(including spaces)
@param result [IN] the number you want to pad spaces in print
*/
void printSpaces(int highestSpaceNumber, int result) {
    int spaceTaken = digitAmount(result);
    int space_amount = highestSpaceNumber - spaceTaken;
    for (int i = 0; i < space_amount; i++) {
        std::cout << " ";
    }
}

/*
calculate the amount of digits -> amount of size used

@param result [IN] the number
@param return [OUT] the amount of spaces taken
*/
int digitAmount(int result) {
    int counter = 0;

    while (result > 0) {
        counter++;
        result /= 10;
    }
    return counter;
}
