#include <iostream>
#include "Amphibian.h"
#include "AC.h"
#include "FunctorA.h"
#include "ArrayCm.h"


int main() {
    ArrayCm arr1(5);

    for (size_t i = 0; i < arr1.getSize(); ++i) {
        arr1[i] = i * 2;
    }

    std::cout << "Array: " << arr1 << std::endl;
    std::cout << "Element at index 2: " << arr1[2] << std::endl;
    ArrayCm arr2 = arr1;
    std::cout << "Copied Array: " << arr2 << std::endl;

    arr2[2] = 42;
    std::cout << "Modified Copied Array: " << arr2 << std::endl;


    Fish fish1("Fish", 10);
    Lizard lizard1("lizard", "North Africa");
    Amphibian amphibian1("Frog", "Swamp", 5);

    std::cout << "Instance count after creating objects: " << Animal::getCount() << std::endl;

    Fish fish2 = fish1;
    Lizard lizard2 = lizard1;
    Amphibian amphibian2 = amphibian1;

    std::cout << "Instance count after copying objects: " << Animal::getCount() << std::endl;



    return 0;
}

