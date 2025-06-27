#pragma once
#include "Pilot.h"
class BoldPilot : public Pilot {
  public:
    BoldPilot(std::string name, int age, int flightHours, std::string mostDaringManeuver);

    std::string getMostDaringManeuver() const;

    virtual void speak() const;
    virtual std::string getType() const;

  private:
    std::string m_mostDaringManeuver;
};
