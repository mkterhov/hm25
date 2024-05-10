#pragma once
#include <string>

class Animal {
protected:
    static int st_count;
    std::string m_name;

public:
    Animal(const std::string&);
    virtual void voice() const;
    Animal(const Animal&);
    static int getCount();
    ~Animal();
};


