#pragma once
class FunctorA
{
public:
    int operator()(int a, int b)
    {
        return a * b;
    }
};
