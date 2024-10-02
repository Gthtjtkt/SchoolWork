/*
File Name: FunctionsList.cpp
Author: Jack Schneider
Date: 9/7/2024
Course: ITSE-2331 91202 Advanced C++
Instructor: Professor Martinez
Class Schedule: Asynchronous 8/26 - 12/15/2024

File Description:
    contains the declarations of various demonstratory functions

Functions:
    --void calculateDiscount(double listPrice, double discountPercentage, double& discountedPrice) :
        calculates the discounted price based on listPrice and discountPercentage
        the result is passed back via a reference parameter

    --void determineLarger(int intOne, int intTwo, int* largerNumber) :
        determines the larger of two integers, passing the larger value back via a pointer parameter

    --bool compareArrays(const std::string array1[], const std::string testArray2[], int size1, int size2) :
        compares two arrays of strings. Returns true if the arrays contain the same data, false otherwise

    --void sortArrays(std::string array1[], std::string testArray2[], int size1, int size2) :
        sorts two arrays of strings in ascending order

    --void demoPtrTechniques() :
        demonstrates various pointer techniques, including pointer assignment and dereferencing
*/


#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#include <string>

void calculateDiscount(double listPrice, double discountPercentage, double& discountedPrice);
void determineLarger(int intOne, int intTwo, int* largerNumber);
bool compareArrays(const std::string testArray1[], const std::string testArray2[], int size1, int size2);
void sortArrays(std::string array1[], std::string testArray2[], int size1, int size2);
void demoPtrTechniques();

#include "FunctionImplementations.cpp"
#endif
