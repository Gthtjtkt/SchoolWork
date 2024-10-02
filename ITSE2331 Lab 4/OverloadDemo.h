#ifndef OVERLOADDEMO_H
#define OVERLOADDEMO_H

#include <string>

class OverloadDemo {
private:
    int intOne;
    double doubleOne;
    std::string stringOne;

public:
    // constructors
    OverloadDemo();

    // getters and setters
    int getIntOne() const;
    void setIntOne(int i);

    double getDoubleOne() const;
    void setDoubleOne(double d);

    std::string getStringOne() const;
    void setStringOne(const std::string &s);

    // operator overloading
    OverloadDemo operator+(const OverloadDemo &obj);
    OverloadDemo operator-(const OverloadDemo &obj);
    OverloadDemo operator*(const OverloadDemo &obj);
    OverloadDemo operator/(const OverloadDemo &obj);

    // ++ and -- 
    OverloadDemo& operator++();    // Prefix
    OverloadDemo operator++(int);  // Postfix
    OverloadDemo& operator--();    // Prefix
    OverloadDemo operator--(int);  // Postfix
};
#include "OverloadDemo.cpp"
#endif
