#pragma once
#include <string>

class Animal {
protected:
    std::string m_name;

public:
    Animal(const std::string&);
    virtual void voice() const;
    ~Animal();
};


