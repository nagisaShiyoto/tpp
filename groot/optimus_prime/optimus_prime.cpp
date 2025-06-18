#include "prime_functions.h"
#include <iostream>
#include <memory>

int main() {
    int size = 10;
    std::unique_ptr<int> primeNumbers(new int[size]);
    getPrimeNumbers(size, primeNumbers.get());
    for (int i = 0; i < size; i++) {
        std::cout << primeNumbers.get()[i] << " ";
    }
}
