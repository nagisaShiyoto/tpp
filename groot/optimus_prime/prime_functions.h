#include <vector>
/*
check if a certain number is prime

@param number: the number to check if prime
@return: true - if prime, false - if not
*/
bool isPrime(int number);

/*
get a list of prime numbers

@param size: amount of wanted prime numbers number
@param primeNumbers [OUT]: the found numbers
*/
void getPrimeNumbersArray(int size, int primeNumbers[]);

/*
get a vector of prime numbers

@param size: amount of wanted prime numbers number
@return: the found numbers
*/
std::vector<int> getPrimeNumbersVector(int size);