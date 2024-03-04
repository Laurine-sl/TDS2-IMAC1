#include <iostream>
#include "utils.hpp"

int gcd(int a, int b)
{
    while (a % b != 0)
    {
        int old_b = b;
        b = a % b;
        a = old_b;
    }
    return b;
}

Fraction simplify(Fraction a)
{
    Fraction fraction;
    int pgcd = gcd(a.numerator, a.denominator);
    fraction.numerator = a.numerator / pgcd;
    fraction.denominator = a.denominator / pgcd;
    return fraction;
}