
#include <iostream>
#include "Amphibian.h"
#include "AC.h"
#include "FunctorA.h"


int main() {
    Amphibian ab("Frog", "North America", 123);
    ab.voice();
    ab.walk();
    ab.swim();

    FunctorA a;
    std::cout << "Functor " << a(1, 23) << std::endl;

    return 0;
}

