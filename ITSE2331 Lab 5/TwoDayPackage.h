//TwoDayPackage.h
/*
Class TwoDayPackage - inherits from Class Package and contains the following:
Member data: twoDayFee (an additional flat rate fee for two day shipping)
Member functions: setTwoDayFee(), getTwoDayFee(), Override calculateCost() to include twoDayFee
*/

#ifndef TWODAYPACKAGE_H
#define TWODAYPACKAGE_H

#include "Package.h"

class TwoDayPackage : public Package {
private:
    double twoDayFee;

public:
    TwoDayPackage(const std::string& sName, const std::string& sAddress, const std::string& sCity, const std::string& sState,
    int sZip, int rZip, double w, double cost, double fee);

    void setTwoDayFee(double fee);
    double getTwoDayFee() const;

    double calculateCost() const override;
};
#include "TwoDayPackage.cpp"

#endif
