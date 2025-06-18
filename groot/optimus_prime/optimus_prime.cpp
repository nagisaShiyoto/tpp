#include "prime_functions.h"
#include <iostream>
#include <vector>

int main() {
    int size = 10;
    int* primeNumbers = new int[size];
    std::vector<int> vectorPrimeNumber = getPrimeNumbersVector(size);
    getPrimeNumbersArray(size, primeNumbers);
    for (int i = 0; i < size; i++) {
        std::cout << primeNumbers[i] << " ";
        std::cout << vectorPrimeNumber[i] << " ";
    }
    delete[] primeNumbers;
}
