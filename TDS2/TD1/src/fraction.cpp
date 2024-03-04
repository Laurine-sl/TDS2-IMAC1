#include <iostream>
#include "fraction.hpp"
#include "utils.hpp"
#include <math.h>

std::ostream &operator<<(std::ostream &os, Fraction const &fraction)
{
    return os << fraction.numerator << "/" << fraction.denominator;
}

Fraction operator+(Fraction const &f1, Fraction const &f2)
{
    Fraction fraction = f1;
    fraction += f2;
    return (simplify(fraction));
    // Fraction fraction;
    // fraction.numerator = f1.numerator * f2.denominator + f2.numerator * f1.denominator;
    // fraction.denominator = f1.denominator * f2.denominator;
    // return simplify(fraction);
}
void Fraction::operator+=(Fraction const &f)
{
    numerator = numerator * f.denominator + f.numerator * denominator;
    denominator *= f.denominator;
}

Fraction operator-(Fraction const &f1, Fraction const &f2)
{
    Fraction fraction = f1;
    fraction -= f2;
    return (simplify(fraction));
    // Fraction fraction;
    // fraction.numerator = f1.numerator * f2.denominator - f2.numerator * f1.denominator;
    // fraction.denominator = f1.denominator * f2.denominator;
    // return simplify(fraction);
}
void Fraction::operator-=(Fraction const &f)
{
    numerator = numerator * f.denominator - f.numerator * denominator;
    denominator *= f.denominator;
}

Fraction operator*(Fraction const &f1, Fraction const &f2)
{
    Fraction fraction = f1;
    fraction *= f2;
    return (simplify(fraction));
    // Fraction fraction;
    // fraction.numerator = f1.numerator * f2.numerator;
    // fraction.denominator = f1.denominator * f2.denominator;
    // return simplify(fraction);
}
void Fraction::operator*=(Fraction const &f)
{
    numerator *= f.numerator,
        denominator *= f.denominator;
}

Fraction operator/(Fraction const &f1, Fraction const &f2)
{
    Fraction fraction = f1;
    fraction /= f2;
    return (simplify(fraction));
    // Fraction fraction;
    // fraction.numerator = f1.numerator * f2.denominator;
    // fraction.denominator = f1.denominator * f2.numerator;
    // return simplify(fraction);
}
void Fraction::operator/=(Fraction const &f)
{
    numerator *= f.denominator;
    denominator *= f.numerator;
}

bool operator==(Fraction const &f1, Fraction const &f2)
{
    Fraction f1simp = simplify(f1);
    Fraction f2simp = simplify(f2);

    return f1simp.numerator == f2simp.numerator && f1simp.denominator == f2simp.denominator;
}

bool operator<(Fraction const &f1, Fraction const &f2)
{
    return f1.numerator * f2.denominator < f1.denominator * f2.numerator;
}
bool operator>=(Fraction const &f1, Fraction const &f2)
{
    return !(f1 < f2);
}
bool operator<=(Fraction const &f1, Fraction const &f2)
{
    return (f1 < f2) || (f1 == f2);
}
bool operator>(Fraction const &f1, Fraction const &f2)
{
    return !((f1 < f2) && (f1 == f2));
}

Fraction::operator float() const
{
    return static_cast<float>(numerator) / static_cast<float>(denominator);
}