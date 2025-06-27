#pragma once
#include "Pilot.h"
class OldPilot : public Pilot {
  public:
    OldPilot(std::string name, int age, int flightHours, int yearRetired);

    int getYearsRetired() const;

    virtual void speak() const;
    virtual std::string getType() const;
  private:
    int m_yearRetired;
};
