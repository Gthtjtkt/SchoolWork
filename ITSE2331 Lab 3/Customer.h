/*
File Name: Customer.h
Author: Jack Schneider
Date: 9/13/2024
Course: ITSE-2331 91202 Advanced C++
Instructor: Professor Martinez
Class Schedule: Asynchronous 8/26 - 12/15/2024
*/
#ifndef CUSTOMER_H
#define CUSTOMER_H

#include <string>
#include "templateVector.h"

class Customer {
private:
    int custID;
    std::string name;
    std::string address;
    templateVector<int> orderNums;
    std::string customerCreationTime;
    static int customerCount;

public:
    Customer();

    void setCustID(int id);
    void setName(const std::string& name);
    void setAddress(const std::string& address);
    void addOrderNum(int orderNum);
    void setCustomerCreationTime(const std::string& time);

    int getCustID() const;
    std::string getName() const;
    std::string getAddress() const;
    templateVector<int> getOrderNums() const;  
    std::string getCustomerCreationTime() const;
    static int getCustomerCount();
};

#include "Customer.cpp"
#endif
