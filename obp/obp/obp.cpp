#include <iostream>
#include "OldPilot.h"
#include "BoldPilot.h"
int main()
{
    OldPilot hi("asd", 1, 2, 3);
    BoldPilot hi2("123", 1, 2, "boss");
    hi.displayInfo();
    std::cout << hi.getType() << std::endl;
    std::cout << hi.getYearsRetired() << std::endl;
    hi.speak();

    std::cout << "\n\n\n\n\n\n\n\n";
    hi2.displayInfo();
    std::cout << hi2.getType() << std::endl;
    std::cout << hi2.getMostDaringManeuver() << std::endl;
    hi2.speak();
}
