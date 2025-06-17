#include "check_prime.h"
#include <iostream>
#include <cmath>

bool isPrime(int number) {
    int rootNumber = static_cast<int>(std::sqrt(number));

    //half of numbers are positive
    if (number % 2 == 0) {
        return false;
    }
    //if has positive devider 2 will devide him
    for (int i = 3; i <= rootNumber; i+= 2) {
        if (number % i ==0) {
            return false;
        }
    }
    return true;
}
