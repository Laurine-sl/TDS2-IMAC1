#pragma once
#include <iostream>

struct Fraction
{
    unsigned int numerator{0};
    unsigned int denominator{1};
    void operator+=(Fraction const &f);
    void operator-=(Fraction const &f);
    void operator*=(Fraction const &f);
    void operator/=(Fraction const &f);
    operator float() const;
};

std::ostream &operator<<(std::ostream &os, Fraction const &fraction);
bool operator==(Fraction const& f1, Fraction const& f2);
bool operator<(Fraction const& f1, Fraction const& f2);
bool operator>=(Fraction const& f1, Fraction const& f2);
bool operator<=(Fraction const& f1, Fraction const& f2);
bool operator>(Fraction const& f1, Fraction const& f2);


Fraction operator+(Fraction const &f1, Fraction const &f2);
Fraction operator-(Fraction const &f1, Fraction const &f2);
Fraction operator*(Fraction const &f1, Fraction const &f2);
Fraction operator/(Fraction const &f1, Fraction const &f2);
