/*
File Name: utilityFunctions.cpp
Author: Jack Schneider
Date: 9/13/2024
Course: ITSE-2331 91202 Advanced C++
Instructor: Professor Martinez
Class Schedule: Asynchronous 8/26 - 12/15/2024
*/
#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <vector>
#include <ctime>
#include <iomanip>
#include <string>

#include "Customer.h"
#include "Order.h"
#include "Product.h"

void getTime(std::string& timeStr) {
    time_t now = time(0);
    tm* ltm = localtime(&now);

    char buffer[80];
    strftime(buffer, sizeof(buffer), "%a %b %d %H:%M:%S %Y", ltm);
    timeStr = buffer;
}

void outputReport(const std::vector<Customer>& customers, const std::vector<Order>& orders, const std::vector<Product>& products) {
    const int firstWidth = 15;
    const int secondWidth = 20;
    const int thirdWidth = 30;
    const int fourthWidth = 25;

    std::cout << "Customer Report:" << std::endl;
    std::cout << std::left << std::setw(firstWidth) << "Customer ID"
              << std::setw(secondWidth) << "Name"
              << std::setw(thirdWidth) << "Address"
              << std::setw(fourthWidth) << "Creation Time" << std::endl;
    for (const auto& customer : customers) {
        std::cout << std::left << std::setw(firstWidth) << customer.getCustID()
                  << std::setw(secondWidth) << customer.getName()
                  << std::setw(thirdWidth) << customer.getAddress()
                  << std::setw(fourthWidth) << customer.getCustomerCreationTime() << std::endl;
    }

    std::cout << "\nOrder Report:" << std::endl;
    std::cout << std::left << std::setw(firstWidth) << "Order Number"
              << std::setw(firstWidth) << "Customer ID"
              << std::setw(thirdWidth) << "Product Numbers"
              << std::setw(fourthWidth) << "Creation Time" << std::endl;
    for (const auto& order : orders) {
        std::cout << std::left << std::setw(firstWidth) << order.getOrderNum()
                  << std::setw(firstWidth) << order.getCustID();

        std::string productNums;
        for (const auto& productNum : order.getProductNums()) {
            productNums += std::to_string(productNum) + " ";
        }
        std::cout << std::left << std::setw(thirdWidth) << productNums
                  << std::setw(fourthWidth) << order.getOrderCreationTime() << std::endl;
    }

    std::cout << "\nProduct Report:" << std::endl;
    std::cout << std::left << std::setw(firstWidth) << "Product Number"
              << std::setw(secondWidth) << "Name"
              << std::setw(thirdWidth) << "Description"
              << std::setw(fourthWidth) << "Creation Time" << std::endl;
    for (const auto& product : products) {
        std::cout << std::left << std::setw(firstWidth) << product.getProductNum()
                  << std::setw(secondWidth) << product.getProductName()
                  << std::setw(thirdWidth) << product.getProductDescription()
                  << std::setw(fourthWidth) << product.getProductCreationTime() << std::endl;
    }
}

int main() {
    std::cout << "Hello! This program simulates a simple product ordering system. It is for entering data on customers, orders, and products. If the user wants, the program can return this data to the user." << std::endl;
    std::vector<Customer> customers;
    std::vector<Order> orders;
    std::vector<Product> products;

    int choice;
    do {
        std::cout << "\nProduct Ordering System\n";
        std::cout << "1. Create New Customer\n";
        std::cout << "2. Create New Order\n";
        std::cout << "3. Create New Product\n";
        std::cout << "4. Output Report\n";
        std::cout << "5. Exit\n";
        std::cout << "Enter your choice: ";
        std::cin >> choice;
        
        switch (choice) {
            case 1: {
                Customer newCustomer;
                int id;
                std::string name, address, creationTime;

                std::cout << "Enter Customer ID: ";
                std::cin >> id;
                newCustomer.setCustID(id);

                std::cin.ignore();
                std::cout << "Enter Customer Name: ";
                std::getline(std::cin, name);
                newCustomer.setName(name);

                std::cout << "Enter Customer Address: ";
                std::getline(std::cin, address);
                newCustomer.setAddress(address);

                getTime(creationTime);
                newCustomer.setCustomerCreationTime(creationTime);

                customers.push_back(newCustomer);
                break;
            }

            case 2: {
                if (customers.empty()) {
                    std::cout << "No customers available. Please create a customer first.\n";
                    break;
                }

                Order newOrder;
                int orderNum, custID, productNum;
                std::string creationTime;

                std::cout << "Enter Order Number: ";
                std::cin >> orderNum;
                newOrder.setOrderNum(orderNum);

                std::cout << "Enter Customer ID for the Order: ";
                std::cin >> custID;
                newOrder.setCustID(custID);

                std::cout << "Enter Product Numbers (enter -1 to stop): ";
                while (true) {
                    std::cin >> productNum;
                    if (productNum == -1) break;
                    newOrder.addProductNum(productNum);
                }

                getTime(creationTime);
                newOrder.setOrderCreationTime(creationTime);

                orders.push_back(newOrder);

                for (auto& customer : customers) {
                    if (customer.getCustID() == custID) {
                        customer.addOrderNum(orderNum);
                        break;
                    }
                }
                break;
            }

            case 3: {
                Product newProduct;
                int productNum;
                std::string name, description, creationTime;

                std::cout << "Enter Product Number: ";
                std::cin >> productNum;
                newProduct.setProductNum(productNum);

                std::cin.ignore();
                std::cout << "Enter Product Name: ";
                std::getline(std::cin, name);
                newProduct.setProductName(name);

                std::cout << "Enter Product Description: ";
                std::getline(std::cin, description);
                newProduct.setProductDescription(description);

                getTime(creationTime);
                newProduct.setProductCreationTime(creationTime);

                products.push_back(newProduct);
                break;
            }

            case 4:
                outputReport(customers, orders, products);
                break;

            case 5:
                std::cout << "Exiting the program.\n";
                break;

            default:
                std::cout << "Invalid choice. Please try again.\n";
                break;
        }
    } while (choice != 5);
    std::cout << "Closing Statement." << std::endl;
    return 0;
}
