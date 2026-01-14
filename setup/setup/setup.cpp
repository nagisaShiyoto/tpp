#include <iostream>

int sum()
{
    int num1 = 0;
    int num2 = 0;
    int sum = 0;
    std::cout << "enter number: " << std::endl;
    std::cin >> num1;
    std::cout << "enter number: " << std::endl;
    std::cin >> num2;
    sum = num1 + num2;
    std::cout << num1 << " + " << num2 << " = " << sum << std::endl;

    return sum;
}

int main()
{
    sum();
    std::cout << "Hello World!\n";
}