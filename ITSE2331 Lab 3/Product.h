/*
File Name: Product.h
Author: Jack Schneider
Date: 9/13/2024
Course: ITSE-2331 91202 Advanced C++
Instructor: Professor Martinez
Class Schedule: Asynchronous 8/26 - 12/15/2024
*/
#ifndef PRODUCT_H
#define PRODUCT_H

#include <string>
#include <iomanip>
#include "templateVector.h"


class Product {
private:
    int productNum;
    std::string productName;
    std::string productDescription;
    std::string productCreationTime;
    static int productCount;

public:
    Product();

    void setProductNum(int num);
    void setProductName(const std::string& name);
    void setProductDescription(const std::string& description);
    void setProductCreationTime(const std::string& time);

    int getProductNum() const;
    std::string getProductName() const;
    std::string getProductDescription() const;
    std::string getProductCreationTime() const;
    static int getProductCount();
};

#include "Product.cpp"
#endif
