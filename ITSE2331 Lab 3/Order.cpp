/*
File Name: Order.cpp
Author: Jack Schneider
Date: 9/13/2024
Course: ITSE-2331 91202 Advanced C++
Instructor: Professor Martinez
Class Schedule: Asynchronous 8/26 - 12/15/2024
*/
#include "Order.h"
#include <iomanip>

int Order::orderCount = 0;

Order::Order() : orderNum(0), custID(0), orderCreationTime("") {
    orderCount++;
}

void Order::setOrderNum(int num) {
    orderNum = num;
}

void Order::setCustID(int id) {
    custID = id;
}

void Order::addProductNum(int productNum) {
    productNums.addElement(productNum);
}

void Order::setOrderCreationTime(const std::string& time) {
    orderCreationTime = time;
}

int Order::getOrderNum() const {
    return orderNum;
}

int Order::getCustID() const {
    return custID;
}

templateVector<int> Order::getProductNums() const {
    return productNums; 
}

std::string Order::getOrderCreationTime() const {
    return orderCreationTime;
}

int Order::getOrderCount() {
    return orderCount;
}
