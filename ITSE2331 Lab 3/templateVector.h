/*
File Name: templateVector.h
Author: Jack Schneider
Date: 9/13/2024
Course: ITSE-2331 91202 Advanced C++
Instructor: Professor Martinez
Class Schedule: Asynchronous 8/26 - 12/15/2024
*/
#ifndef TEMPLATE_VECTOR_H
#define TEMPLATE_VECTOR_H

#include <vector>

template <typename T>
class templateVector {
private:
    std::vector<T> elements;

public:
    void addElement(const T& element) {
        elements.push_back(element);
    }

    std::vector<T> getElements() const {
        return elements;
    }

    T getElementAt(int index) const {
        return elements.at(index);
    }

    size_t size() const {
        return elements.size();
    }

    typename std::vector<T>::iterator begin() {
        return elements.begin();
    }

    typename std::vector<T>::iterator end() {
        return elements.end();
    }

    typename std::vector<T>::const_iterator begin() const {
        return elements.begin();
    }

    typename std::vector<T>::const_iterator end() const {
        return elements.end();
    }
};

#endif
