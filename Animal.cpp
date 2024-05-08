#include "Animal.h"
#include <iostream>

Animal::Animal(const std::string& name) : m_name(name) {
    std::cout << "Animal Constructor: " << name << std::endl;
}

void Animal::voice() const {
    std::cout << m_name << " is an animal." << std::endl;
}

Animal::~Animal() {
    std::cout << "Animal Destructor: " << m_name << std::endl;
}
