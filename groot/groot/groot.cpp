#include <iostream>

#define POSITIVE_THRESHOLD 0

float get_positive_number();

int main() {
    float number = get_positive_number();
    float result = std::sqrt(number);
    std::cout << "result: " << result << std::endl;

    return 0;
}

/*
get a positive number from user
@param return [OUT] user's positive number
*/
float get_positive_number() {
    float input = -1;
    while (input < POSITIVE_THRESHOLD) {
        std::cout << "enter positive number: ";
        std::cin >> input;
    }
    return input;
}
