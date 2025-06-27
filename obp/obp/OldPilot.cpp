#include "OldPilot.h"
#define OLD_PILOT_TYPE "Old Pilot"

OldPilot::OldPilot(std::string name, int age, int flightHours, int yearRetired) : Pilot(name, age,flightHours) {
    this->m_yearRetired = yearRetired;
}

int OldPilot::getYearsRetired() const {
    return this->m_yearRetired;
}

void OldPilot::speak() const {
    std::cout << "come hear " << this->m_name << "'s story:" << std::endl;
    std::cout << "----------------------------------------" << std::endl;
    std::cout << "to do: get from file, 2 options and stuff" << std::endl;
    std::cout << "----------------------------------------" << std::endl;
}

std::string OldPilot::getType() const {
    return OLD_PILOT_TYPE;
}
