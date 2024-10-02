//Package.h

#ifndef PACKAGE_H
#define PACKAGE_H

#include <string>

class Package {
protected:
    std::string senderName, senderAddress, senderCity, senderState;
    int senderZip, receiverZip;
    double weight, costPerOunce;

public:
    Package(const std::string& sName, const std::string& sAddress, const std::string& sCity, const std::string& sState, int sZip,
            int rZip, double w, double cost);

    void setSenderName(const std::string& sName);
    std::string getSenderName() const;

    void setSenderAddress(const std::string& sAddress);
    std::string getSenderAddress() const;

    void setSenderCity(const std::string& sCity);
    std::string getSenderCity() const;

    void setSenderState(const std::string& sState);
    std::string getSenderState() const;

    void setSenderZip(int sZip);
    int getSenderZip() const;

    void setReceiverZip(int rZip);
    int getReceiverZip() const;

    void setWeight(double w);
    double getWeight() const;

    void setCostPerOunce(double cost);
    double getCostPerOunce() const;


    virtual double calculateCost() const;
};

#include "Package.cpp"
#endif
