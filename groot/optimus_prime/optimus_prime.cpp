#include <iostream>
#include "check_prime.h"

int main()
{
    int size = 20;
    for (int i = 0; i < size; i++) {
        if (isPrime(i)) {
            std::cout << i << std::endl;
        }

    }
}
