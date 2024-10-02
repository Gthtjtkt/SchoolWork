#include "Product.h"

// Initialize static member
int Product::productCount = 0;

// Constructor
Product::Product() {
    productNum = 0;
    productName = "";
    productDescription = "";
    productCreationTime = "";
    productCount++;
}

// Setters
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

// Getters
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
