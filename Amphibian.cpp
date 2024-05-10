#include "Amphibian.h"
#include <iostream>

Amphibian::Amphibian(const std::string& name, const std::string& habitatRegion, const int& oxygenNeed)
    : Animal(name), Lizard(name, habitatRegion), Fish(name, oxygenNeed) {
    std::cout << "amphibian Constructor: " << name << " In " << Lizard::getHabitatRegion() << std::endl;
}

Amphibian::Amphibian(const Amphibian& obj) : Animal(obj), Lizard(obj), Fish(obj) {
    std::cout << "Amphibian Copy Constructor: " << m_name << " In " << Lizard::getHabitatRegion() << std::endl;
}

void Amphibian::voice() const {
    std::cout << m_name << ": amphibian" << std::endl;
}

void Amphibian::walk() const
{
    std::cout << m_name << ": amphibian walks" << std::endl;
}

void Amphibian::swim() const
{
    std::cout << m_name << ": amphibian swims" << std::endl;
}

Amphibian::~Amphibian() {
    std::cout << "amphibian destructor: " << m_name << std::endl;
}