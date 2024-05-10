#include "ArrayCm.h"
#include <iostream>
#include <cstdlib>

ArrayCm::ArrayCm(int size) : size(size) {
    data = new int[size];
}

ArrayCm::~ArrayCm() {
    delete[] data;
}

ArrayCm::ArrayCm(const ArrayCm& other) : size(other.size) {
    delete[] data;
    data = new int[size];
    for (size_t i = 0; i < size; ++i) {
        data[i] = other.data[i];
    }
}

int& ArrayCm::operator[](int index) {
    if (index >= size) {
        std::cerr << "Index out of bounds" << std::endl;
        exit(EXIT_FAILURE);
    }
    return data[index];
}

const int& ArrayCm::operator[](int index) const {
    if (index >= size) {
        std::cerr << "Index out of bounds" << std::endl;
        exit(EXIT_FAILURE);
    }
    return data[index];
}

std::ostream& operator<<(std::ostream& os, const ArrayCm& arr) {
    os << "[";
    for (size_t i = 0; i < arr.getSize(); ++i) {
        os << i << ":";

        os << arr[i];
        if (i != arr.getSize() - 1) {
            os << ", ";
        }
    }
    os << "]";

    return os;
}

int ArrayCm::getSize() const {
    return size;
}

void ArrayCm::setValue(int index, int value) {
    if (index >= size) {
        std::cerr << "Index out of bounds" << std::endl;
        exit(EXIT_FAILURE);
    }
    data[index] = value;
}