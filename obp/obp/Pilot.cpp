#include "Pilot.h"

Pilot::Pilot(std::string name, int age, int flightHours) {
    this->m_name = name;
    this->m_age = age;
    this->m_flightHours = flightHours;
}

void Pilot::displayInfo() const {
    std::cout << this->m_name << "'s info" << std::endl;
    std::cout << "----------------------------------------" << std::endl;
    std::cout << "name: " << this->m_name << std::endl;
    std::cout << "age: " << this->m_age << std::endl;
    std::cout << "flight hours: " << this->m_flightHours << std::endl;
    std::cout << "----------------------------------------" << std::endl;
}