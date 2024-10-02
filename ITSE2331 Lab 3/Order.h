/*
File Name: Order.h
Author: Jack Schneider
Date: 9/13/2024
Course: ITSE-2331 91202 Advanced C++
Instructor: Professor Martinez
Class Schedule: Asynchronous 8/26 - 12/15/2024
*/
#ifndef ORDER_H
#define ORDER_H

#include <string>
#include "templateVector.h"

class Order {
private:
    int orderNum;
    int custID;
    templateVector<int> productNums;
    std::string orderCreationTime;
    static int orderCount;

public:
    Order();

    void setOrderNum(int num);
    void setCustID(int id);
    void addProductNum(int productNum);
    void setOrderCreationTime(const std::string& time);

    int getOrderNum() const;
    int getCustID() const;
    templateVector<int> getProductNums() const;
    std::string getOrderCreationTime() const;
    static int getOrderCount();
};

#include "Order.cpp"
#endif
