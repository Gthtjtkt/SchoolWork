/*
File Name: Customer.cpp
Author: Jack Schneider
Date: 9/13/2024
Course: ITSE-2331 91202 Advanced C++
Instructor: Professor Martinez
Class Schedule: Asynchronous 8/26 - 12/15/2024
*/
#include "Customer.h"
#include <iomanip>

int Customer::customerCount = 0;

Customer::Customer() : custID(0), name(""), address(""), customerCreationTime("") {
    customerCount++;
}

void Customer::setCustID(int id) {
    custID = id;
}

void Customer::setName(const std::string& name) {
    this->name = name;
}

void Customer::setAddress(const std::string& address) {
    this->address = address;
}

void Customer::addOrderNum(int orderNum) {
    orderNums.addElement(orderNum); 
}

void Customer::setCustomerCreationTime(const std::string& time) {
    customerCreationTime = time;
}

int Customer::getCustID() const {
    return custID;
}

std::string Customer::getName() const {
    return name;
}

std::string Customer::getAddress() const {
    return address;
}

templateVector<int> Customer::getOrderNums() const {
    return orderNums;
}

std::string Customer::getCustomerCreationTime() const {
    return customerCreationTime;
}

int Customer::getCustomerCount() {
    return customerCount;
}
