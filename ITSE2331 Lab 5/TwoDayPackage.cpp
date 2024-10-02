//TwoDayPackage.cpp
/*
Class TwoDayPackage - inherits from Class Package and contains the following:
Member data: twoDayFee (an additional flat rate fee for two day shipping)
Member functions: setTwoDayFee(), getTwoDayFee(), Override calculateCost() to include twoDayFee
*/

#include "TwoDayPackage.h"

TwoDayPackage::TwoDayPackage(const std::string& sName, const std::string& sAddress, const std::string& sCity, const std::string& sState,
    int sZip, int rZip, double w, double cost, double fee)
    : Package(sName, sAddress, sCity, sState, sZip, rZip, w, cost), twoDayFee(fee) {}

void TwoDayPackage::setTwoDayFee(double fee) { twoDayFee = fee; }
double TwoDayPackage::getTwoDayFee() const { return twoDayFee; }

double TwoDayPackage::calculateCost() const {
    return Package::calculateCost() + twoDayFee;
}
