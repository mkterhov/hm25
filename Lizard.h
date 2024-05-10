#pragma once

#include "Animal.h"

class Lizard : public virtual Animal 
{
private:
    std::string m_habitatRegion;
public:
    Lizard(const std::string&, const std::string&);
    void voice() const override;
    Lizard(const Lizard&);
    virtual void walk() const;
    std::string getHabitatRegion() const;
    virtual ~Lizard();
};

