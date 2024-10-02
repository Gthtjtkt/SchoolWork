#include "OverloadDemo.h"

// Constructors
OverloadDemo::OverloadDemo() : intOne(0), doubleOne(0.0), stringOne("") {}

// Getters and Setters
int OverloadDemo::getIntOne() const { return intOne; }
void OverloadDemo::setIntOne(int i) { intOne = i; }

double OverloadDemo::getDoubleOne() const { return doubleOne; }
void OverloadDemo::setDoubleOne(double d) { doubleOne = d; }

std::string OverloadDemo::getStringOne() const { return stringOne; }
void OverloadDemo::setStringOne(const std::string &s) { stringOne = s; }

// Operator overloading
OverloadDemo OverloadDemo::operator+(const OverloadDemo &obj) {
    OverloadDemo result;
    result.intOne = this->intOne + 5;
    result.doubleOne = this->doubleOne + 5;
    result.stringOne = this->stringOne + "-APP";
    return result;
}

OverloadDemo OverloadDemo::operator-(const OverloadDemo &obj) {
    OverloadDemo result;
    result.intOne = this->intOne - 5;
    result.doubleOne = this->doubleOne - 5;
    result.stringOne = this->stringOne.length() > 4 ? this->stringOne.substr(0, this->stringOne.length() - 4) : ""; // Remove last 4 characters
    return result;
}

OverloadDemo OverloadDemo::operator*(const OverloadDemo &obj) {
    OverloadDemo result;
    result.intOne = this->intOne * 2;
    result.doubleOne = this->doubleOne * 2;
    result.stringOne = this->stringOne + this->stringOne; // Duplicate string
    return result;
}

OverloadDemo OverloadDemo::operator/(const OverloadDemo &obj) {
    OverloadDemo result;
    result.intOne = this->intOne / 2;
    result.doubleOne = this->doubleOne / 2;
    int len = this->stringOne.length();
    result.stringOne = this->stringOne.substr(0, (len + 1) / 2); // Remove latter half of characters
    return result;
}

OverloadDemo& OverloadDemo::operator++() {
    ++intOne;
    ++doubleOne;
    return *this;
}

OverloadDemo OverloadDemo::operator++(int) {
    OverloadDemo temp = *this;
    ++(*this);
    return temp;
}

OverloadDemo& OverloadDemo::operator--() {
    --intOne;
    --doubleOne;
    return *this;
}

OverloadDemo OverloadDemo::operator--(int) {
    OverloadDemo temp = *this;
    --(*this);
    return temp;
}
