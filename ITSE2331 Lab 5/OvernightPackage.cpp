//OvernightPackage.cpp
/*
Class OvernightPackage - inherits from Class Package and contains the following:
Member data: overnightRate (an additional cost per ounce rate for overnight shipping)
Member functions: setOvernightRate(), getOvernightRate(), Override calculateCost() to include overnightRate
*/

#include "OvernightPackage.h"

OvernightPackage::OvernightPackage(const std::string& sName, const std::string& sAddress, const std::string& sCity, const std::string& sState,
int sZip, int rZip, double w, double cost, double rate)
    : Package(sName, sAddress, sCity, sState, sZip, rZip, w, cost), overnightRate(rate) {}

void OvernightPackage::setOvernightRate(double rate) { overnightRate = rate; }
double OvernightPackage::getOvernightRate() const { return overnightRate; }

double OvernightPackage::calculateCost() const {
    return Package::calculateCost() + (weight * overnightRate);
}
