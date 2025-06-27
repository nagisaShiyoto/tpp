#include "BoldPilot.h"
#define BOLD_PILOT_TYPE "Bold Pilot"
BoldPilot::BoldPilot(std::string name, int age, int flightHours, std::string mostDaringManeuver) :
	Pilot(name, age, flightHours) {
    this->m_mostDaringManeuver = mostDaringManeuver;
}

std::string BoldPilot::getMostDaringManeuver() const {
    return this->m_mostDaringManeuver;
}

void BoldPilot::speak() const {
    std::cout << "come hear " << this->m_name << "'s story:" << std::endl;
    std::cout << "----------------------------------------" << std::endl;
    std::cout << "to do: get from file, 2 options and stuff" << std::endl;
    std::cout << "----------------------------------------" << std::endl;
}

std::string BoldPilot::getType() const {
    return BOLD_PILOT_TYPE;
}
