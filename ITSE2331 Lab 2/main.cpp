/*
File Name: main.cpp
Author: Jack Schneider
Date: 9/7/2024
Course: ITSE-2331 91202 Advanced C++
Instructor: Professor Martinez
Class Schedule: Asynchronous 8/26 - 12/15/2024

File Description:
    contains the main program logic for the program about demoing various C++ functions

Functions:
    --int main() : The main function that drives the program
*/

#include <iostream>
#include <string>
#include <algorithm>
#include "FunctionsList.h"

int main() {

    std::cout << "Welcoming! this program will calculate the discount off of a list price, tell you the larger of 2 integers," << std::endl;
    std::cout << "compare the contents of arrays, sort arrays, and demonstrate ways to pass a pointer to a function." << std::endl;

    double listPrice, discountPercentage, discountedPrice;
    std::cout << "Enter list price: ";
    std::cin >> listPrice;
    std::cout << "Enter discount percentage: ";
    std::cin >> discountPercentage;
    calculateDiscount(listPrice, discountPercentage, discountedPrice);
    std::cout << "Discounted price: " << discountedPrice << std::endl;

    int intOne, intTwo, largerNumber;
    std::cout << "\n\nEnter first integer: ";
    std::cin >> intOne;
    std::cout << "Enter second integer: ";
    std::cin >> intTwo;
    determineLarger(intOne, intTwo, &largerNumber);
    std::cout << "Larger number: " << largerNumber << std::endl;

    int array1[2], array2[2];

    std::cout << "\nEnter 2 integers for the first array:" << std::endl;
    for (int i = 0; i < 2; ++i) {
        std::cout << "Array1 element " << i + 1 << ": ";
        std::cin >> array1[i];
    }

    std::cout << "\nEnter 2 integers for the second array:" << std::endl;
    for (int i = 0; i < 2; ++i) {
        std::cout << "Array2 element " << i + 1 << ": ";
        std::cin >> array2[i];
    }

    bool areEqual = compareArrays(array1, array2, 2, 2);
    std::cout << "\nArrays are " << (areEqual ? "equal\n" : "not equal\n") << std::endl;
//-----------------------------------------------------------------------------------------------------------------------------
    std::string unsortedArray1[] = {"string2", "string3", "string1"};
    Array<std::string, 3> array2_2;

    array2_2.add("string3");
    array2_2.add("string2");
    array2_2.add("string1");

    std::cout << "Unsorted Array1 (Built-in array): ";
    for (const auto& item : unsortedArray1) {
        std::cout << item << " ";
    }
    std::cout << std::endl;

    std::cout << "Unsorted Array2 (Template class array): ";
    array2_2.print();

    // Sort both arrays
    sortArrays(unsortedArray1, 3, array2_2);

    // Display sorted arrays
    std::cout << "Sorted Array1 (Built-in array): ";
    for (const auto& item : unsortedArray1) {
        std::cout << item << " ";
    }
    std::cout << std::endl;

    std::cout << "Sorted Array2 (Template class array): ";
    array2_2.print();

    demoPtrTechniques();

    std::cout << "Program Ended." << std::endl;

    return 0;
}

