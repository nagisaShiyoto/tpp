#include <iostream>
#include "OldPilot.h"
int main()
{
    OldPilot hi("asd", 1, 2, 3);
    hi.displayInfo();
    std::cout << hi.getType() << std::endl;
    std::cout << hi.getYearsRetired() << std::endl;
    hi.speak();
}
