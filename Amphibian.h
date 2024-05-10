#pragma once

#include "Lizard.h"
#include "Fish.h"

class Amphibian : public Lizard, public Fish {
public:
    Amphibian(const std::string&, const std::string&, const int&);
    Amphibian(const Amphibian&);
    void voice() const override;
    void swim() const override;
    void walk() const override;

    virtual ~Amphibian();
};
