#include <iostream>
#include "ComplexNumber.h"


int main() {
    ComplexNumber test1;
    ComplexNumber test2(2, 1);
    ComplexNumber test3(2, 1);
    test1.printNumber();
    test1 = test1 + test2;
    test1.printNumber();
    (test1 == test2) ? std::cout << "yay" << std::endl : std::cout << "nahhh" << std::endl;
    test2 = test1 - test2;
    test2.printNumber();
    test2 = test1 * test2;
    test2.printNumber();
    test3 = test3 * test1;
    test3.printNumber();
    test3.setImaginary(1);
    test3.setReal(123);
    test3.printNumber();
    std::cout << test3.getReal() <<" " << test3.getImaginary();
}
