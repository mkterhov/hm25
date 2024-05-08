#pragma once
class FunctorA
{
private:
    int modifier;
public:
    FunctorA(const int& m) : modifier(m) {}
    int operator()(int a, int b)
    {
        return (a + b) * modifier;
    }
};
