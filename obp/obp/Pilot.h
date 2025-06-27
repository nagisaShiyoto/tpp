#pragma once
#include <iostream>
class Pilot {
  public:
    Pilot(std::string name, int age, int flightHours);

    void displayInfo() const;
    virtual void speak() const = 0;
    virtual std::string getType() const = 0;

  protected:
    std::string m_name;
    int m_age;
    int m_flightHours;
};
