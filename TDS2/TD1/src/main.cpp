#include <iostream>
#include "fraction.hpp"

int main()
{
    Fraction f1{24, 12};
    Fraction f2{56, 46};
    // std::cout << "saisissez le numérateur de la fraction 1" <<std::endl;
    // std::cin >>
    std::cout << "f1 = " << f1 << std::endl;
    std::cout << "f2 = " << f2 << std::endl;

    Fraction f3 = f1 + f2;
    Fraction f4 = f1 - f2;
    Fraction f5 = f1 * f2;
    Fraction f6 = f1 / f2;

    std::cout << "f3 = " << f3 << std::endl;
    std::cout << "f4 = " << f4 << std::endl;
    std::cout << "f5 = " << f5 << std::endl;
    std::cout << "f6 = " << f6 << std::endl;

    if (f4 == f5)
    {
        std::cout << "f4 = f5" << std::endl;
    }
    else
    {
        std::cout << "f4 ≠ f5" << std::endl;
    }

    if (f5 < f4)
    {
        std::cout << "f5 < f4" << std::endl;
    }
    else
    {
        std::cout << "f5 > f4" << std::endl;
    }

    if (f1 > f2)
    {
        std::cout << "f1 > f2" << std::endl;
    }
    else
    {
        std::cout << "f1 < f2" << std::endl;
    }

    std::cout << float(f1) << std::endl;
}
