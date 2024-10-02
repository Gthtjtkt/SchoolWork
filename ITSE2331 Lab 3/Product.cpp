/*
File Name: Product.cpp
Author: Jack Schneider
Date: 9/13/2024
Course: ITSE-2331 91202 Advanced C++
Instructor: Professor Martinez
Class Schedule: Asynchronous 8/26 - 12/15/2024
*/
#include "Product.h"
#include <iomanip>


int Product::productCount = 0;

Product::Product() {
    productNum = 0;
    productName = "";
    productDescription = "";
    productCreationTime = "";
    productCount++;
}

void Product::setProductNum(int num) {
    productNum = num;
}

void Product::setProductName(const std::string& name) {
    productName = name;
}

void Product::setProductDescription(const std::string& description) {
    productDescription = description;
}

void Product::setProductCreationTime(const std::string& time) {
    productCreationTime = time;
}

int Product::getProductNum() const {
    return productNum;
}

std::string Product::getProductName() const {
    return productName;
}

std::string Product::getProductDescription() const {
    return productDescription;
}

std::string Product::getProductCreationTime() const {
    return productCreationTime;
}

int Product::getProductCount() {
    return productCount;
}
