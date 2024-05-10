#include "Animal.h"
#include <iostream>

int Animal::st_count = 0;

Animal::Animal(const std::string& name) : m_name(name) {
    std::cout << "Animal Constructor: " << name << std::endl;
    ++st_count;
}

void Animal::voice() const {
    std::cout << m_name << " is an animal." << std::endl;
}

Animal::~Animal() {
    --st_count;
    std::cout << "Animal Destructor: " << m_name << std::endl;
}

Animal::Animal(const Animal& obj) : m_name(obj.m_name)
{
    ++Animal::st_count;
    std::cout << "Animal Copy Constructor: " << m_name << std::endl;
}

int Animal::getCount()
{
    return st_count;
}
