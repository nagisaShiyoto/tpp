#include "prime_functions.h"
#include <cmath>
#include <iostream>

bool isPrime(int number) {
    double rootNumber = std::sqrt(number);

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

void getPrimeNumbersArray(int size, int primeNumbers[]) {
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


std::vector<int> getPrimeNumbersVector(int size) {
    std::vector<int> primeNumbers;
    int primeFound = 1;
    int currentCheck = 3;
    if (size <= 0) {
        return primeNumbers;
    }
    primeNumbers.push_back(2);
    while (primeFound < size) {
        if (isPrime(currentCheck)) {
            primeNumbers.push_back(currentCheck);
            primeFound++;
        }
        // number can't be positive
        currentCheck += 2;
    }
    return primeNumbers;
}
