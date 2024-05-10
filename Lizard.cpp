#include "Lizard.h"
#include <iostream>

Lizard::Lizard(const std::string& name, const std::string& habitatRegion) : Animal(name), m_habitatRegion(habitatRegion) {
    std::cout << "Lizard Constructor: " << name << std::endl;
}



void Lizard::voice() const {
    std::cout << m_name << ": lizard." << std::endl;
}

Lizard::Lizard(const Lizard& obj) : Animal(obj), m_habitatRegion(obj.m_habitatRegion)
{
    std::cout << "Lizard Copy Constructor: " << m_name << std::endl;
}

void Lizard::walk() const {
    std::cout << m_name << ": walks." << std::endl;
}

std::string Lizard::getHabitatRegion() const
{
    return m_habitatRegion;
}

Lizard::~Lizard() {
    std::cout << "Lizard Destructor: " << m_name << std::endl;
}
