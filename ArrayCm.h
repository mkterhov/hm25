#pragma once
#include <iostream>

class ArrayCm {
private:
    int* data;
    int size;

public:
    ArrayCm(int size);

    ~ArrayCm();

    ArrayCm(const ArrayCm& other);

    int& operator[](int index);

    const int& operator[](int index) const;

    friend std::ostream& operator<<(std::ostream& os, const ArrayCm& arr);

    int getSize() const;

    void setValue(int index, int value);
};
