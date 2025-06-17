#include <iostream>
#include <cmath>
#include <limits>

float getUserPositiveNumber();

int main() {
    float number = getUserPositiveNumber();
    std::cout << "result: " << std::sqrt(number) << std::endl;

    return 0;
}

/*
get a positive number from user
@return [OUT] user's positive number
*/
float getUserPositiveNumber() {
    float input = -1;
    while (input <= 0) {
        std::cout << "enter a positive number: ";
        std::cin >> input;
        //clear cin
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }
    return input;
}
