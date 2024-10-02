//OvernightPackage.h
/*
Class OvernightPackage - inherits from Class Package and contains the following:
Member data: overnightRate (an additional cost per ounce rate for overnight shipping)
Member functions: setOvernightRate(), getOvernightRate(), Override calculateCost() to include overnightRate
*/

#ifndef OVERNIGHTPACKAGE_H
#define OVERNIGHTPACKAGE_H

#include "Package.h"

class OvernightPackage : public Package {
private:
    double overnightRate;

public:
    OvernightPackage(const std::string& sName, const std::string& sAddress, const std::string& sCity, const std::string& sState, int sZip,
                     int rZip, double w, double cost, double rate);

    void setOvernightRate(double rate);
    double getOvernightRate() const;

    double calculateCost() const override;
};
#include "OvernightPackage.cpp"

#endif
