#pragma once
#include "Animal.h"

class Fish : public virtual Animal {
private:
    const int& m_needOxygen;
public:
    Fish(const std::string&, const int&);
    void voice() const override;
    virtual void swim() const;
    virtual bool filterOxygen(const int& amountOxygen);
    virtual ~Fish();
};
