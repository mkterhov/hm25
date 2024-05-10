#include "Fish.h"
#include <iostream>

Fish::Fish(const std::string& name, const int& needOxygen) : Animal(name), m_needOxygen(needOxygen) {
    std::cout << "Fish Constructor: " << name << " needs " << m_needOxygen << " of oxygen" << std::endl;
}

Fish::Fish(const Fish& obj) : Animal(obj), m_needOxygen(obj.m_needOxygen) {
    std::cout << "Fish Copy Constructor: " << m_name << " needs " << m_needOxygen << " of oxygen" << std::endl;
}


void Fish::voice() const {
    std::cout << m_name << ": I am a fish" << std::endl;
}

void Fish::swim() const {
    std::cout << m_name << " is swimming." << std::endl;
}

bool Fish::filterOxygen(const int& amountOxygen)
{   
    if (amountOxygen < m_needOxygen)
    {
        return false;
    }
    return true;
}

Fish::~Fish() {
    std::cout << "Fish Destructor: " << m_name << std::endl;
}