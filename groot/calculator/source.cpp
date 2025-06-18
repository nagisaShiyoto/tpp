#include "Calculator.h"
#include <iostream>

int main() {
    try {
        std::cout << Calculator::calculate(1, '3', 0);
    } catch (DivideByZeroError err) {
        err.print_error();
    } catch (OutOfOptionError err) {
        err.print_error();
    }
}
