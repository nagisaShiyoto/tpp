#include "prime_functions.h"
#include <cmath>
#include <iostream>

bool isPrime(int number) {
    float rootNumber = std::sqrt(number);

    // half of numbers are positive
    if (number % 2 == 0) {
        return false;
    }
    // if has positive divider 2 will divide him
    for (int i = 3; i <= rootNumber; i += 2) {
        if (number % i == 0) {
            return false;
        }
    }
    return true;
}

void getPrimeNumbers(int size, int primeNumbers[]) {
    int primeFound = 1;
    int currentCheck = 3;
    if (size <= 0) {
        return;
    }
    primeNumbers[0] = 2;
    while (primeFound < size) {
        if (isPrime(currentCheck)) {
            primeNumbers[primeFound] = currentCheck;
            primeFound++;
        }
        // number can't be positive
        currentCheck += 2;
    }
}
