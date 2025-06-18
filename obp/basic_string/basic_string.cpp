#include <iostream>
#include "MyString.h"
int main()
{
    MyString string1;
    MyString string2("123");
    MyString stringCopy(string2);
    MyString add = string2 + " " + stringCopy;
    std::cout << string1.getString() << std::endl;
    std::cout << string2.getString() << std::endl;
    std::cout << add.getString() << std::endl;
    std::cout << stringCopy.getString() << std::endl;
    std::cout <<  (string2 + stringCopy).getString() << std::endl;
    add += string2;
    std::cout << add.getString() << std::endl;

}

