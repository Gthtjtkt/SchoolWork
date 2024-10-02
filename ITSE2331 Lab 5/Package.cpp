//Package.cpp
/*
Class Package - contains the following:
Member data: name, address, city, state, zip for both sender and receiver. weight, costPerOunce
Member functions: constructor to initialize all member data. setters and getters for all member data
Member function: calculateCost() returns a double of weight x costPerOunce
Ensure weight and costPerOunce > 0
*/

#include "Package.h"
#include <stdexcept>

Package::Package(const std::string& sName, const std::string& sAddress, const std::string& sCity, const std::string& sState, int sZip, int rZip, double w, double cost)
    : senderName(sName), senderAddress(sAddress), senderCity(sCity), senderState(sState), senderZip(sZip), receiverZip(rZip), weight(w), costPerOunce(cost) {
    if (weight <= 0 || costPerOunce <= 0) {
        throw std::invalid_argument("Weight and cost per ounce must be greater than 0");
    }
}

void Package::setSenderName(const std::string& sName) { senderName = sName; }
std::string Package::getSenderName() const { return senderName; }

void Package::setSenderAddress(const std::string& sAddress) { senderAddress = sAddress; }
std::string Package::getSenderAddress() const { return senderAddress; }

void Package::setSenderCity(const std::string& sCity) { senderCity = sCity; }
std::string Package::getSenderCity() const { return senderCity; }

void Package::setSenderState(const std::string& sState) { senderState = sState; }
std::string Package::getSenderState() const { return senderState; }

void Package::setSenderZip(int sZip) { senderZip = sZip; }
int Package::getSenderZip() const { return senderZip; }

void Package::setReceiverZip(int rZip) { receiverZip = rZip; }
int Package::getReceiverZip() const { return receiverZip; }

void Package::setWeight(double w) {
    if (w <= 0) {
        throw std::invalid_argument("Weight must be greater than 0");
    }
    weight = w;
}
double Package::getWeight() const { return weight; }

void Package::setCostPerOunce(double cost) {
    if (cost <= 0) {
        throw std::invalid_argument("Cost per ounce must be greater than 0");
    }
    costPerOunce = cost;
}
double Package::getCostPerOunce() const { return costPerOunce; }

double Package::calculateCost() const {
    return weight * costPerOunce;
}
