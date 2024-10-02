/*
File Name: FunctionImplementations.cpp
Author: Jack Schneider
Date: 9/7/2024
Course: ITSE-2331 91202 Advanced C++
Instructor: Professor Martinez
Class Schedule: Asynchronous 8/26 - 12/15/2024

File Description:
    contains the implementations of the functions in the program, as well as the template class for the sortArrays function

Functions:
    --void calculateDiscount(double listPrice, double discountPercentage, double& discountedPrice) :
        calculates the discounted price based on listPrice and discountPercentage
        the result is passed back via a reference parameter

    --void determineLarger(int intOne, int intTwo, int* largerNumber) :
        determines the larger of two integers, passing the larger value back via a pointer parameter

    --bool compareArrays(const std::string array1[], const std::string array2[], int size1, int size2) :
        compares two arrays of strings. Returns true if the arrays contain the same data, false otherwise

    --void sortArrays(std::string array1[], std::string array2[], int size1, int size2) :
        sorts two arrays of strings in ascending order

    --void demoPtrTechniques() :
        demonstrates various pointer techniques, including pointer assignment and dereferencing
*/

#include <iostream>
#include <string>
#include <algorithm>
#include "FunctionsList.h"

template<typename T, std::size_t size>
class Array {
private:
    T arr[size];
    int index;

public:
    Array() : index(0) {}

    void add(T element) {
        if (index < size) {
            arr[index] = element;
            index++;
        }
    }

    void sort() {
        std::sort(arr, arr + index);
    }

    void print() {
        for (int i = 0; i < index; ++i) {
            std::cout << arr[i] << " ";
        }
        std::cout << std::endl;
    }
};


void calculateDiscount(double listPrice, double discountPercentage, double& discountedPrice) {
    discountedPrice = listPrice * (1 - discountPercentage / 100.0);
}

void determineLarger(int intOne, int intTwo, int* largerNumber) {
    if (intOne > intTwo) {
        *largerNumber = intOne;
    } else {
        *largerNumber = intTwo;
    }
}

bool compareArrays(const int testArray1[], const int testArray2[], int size1, int size2) {
    if (size1 != size2) return false;
    for (int i = 0; i < size1; ++i) {
        if (testArray1[i] != testArray2[i]) return false;
    }
    return true;
}

void sortArrays(std::string array1[], int size1, Array<std::string, 3>& array2) {
    std::sort(array1, array1 + size1);
    array2.sort();
}

void demoPtrTechniques() {
    int x = 10;
    int y = 20;

    //Non-constant pointer to non-constant data
    int* pointer1 = &x;
    std::cout << "\nPointer pointer1 points to value: " << *pointer1 << std::endl;
    *pointer1 = 30;
    std::cout << "After updating *pointer1, x = " << x << std::endl;
    pointer1 = &y;
    std::cout << "Pointer pointer1 now points to value: " << *pointer1 << std::endl;

    //Non-constant pointer to constant data
    const int* pointer2 = &x;
    std::cout << "\nPointer pointer2 points to constant value: " << *pointer2 << std::endl;
    pointer2 = &y;
    std::cout << "Pointer pointer2 now points to constant value: " << *pointer2 << std::endl;

    //Constant pointer to non-constant data
    int* const pointer3 = &x;
    std::cout << "\nPointer pointer3 points to value: " << *pointer3 << std::endl;
    *pointer3 = 50; 
    std::cout << "After updating *pointer3, x = " << x << std::endl;

    //Constant pointer to constant data
    const int* const pointer4 = &x;
    std::cout << "\nPointer pointer4 points to constant value: " << *pointer4 << std::endl;
}
