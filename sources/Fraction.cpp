#include "Fraction.hpp"
#include <algorithm>
namespace ariel{

Fraction::Fraction(int num1, int num2)
{
    if (num2 == 0)
        throw std::runtime_error("Denominator can not be zero");
    int gcd = __gcd(num1, num2);
    Numerator = num1 / gcd;
    Denominator = num2 / gcd;
}

Fraction::Fraction(double num) : Numerator(num * 1000), Denominator(1000)
{
    Reduce_fraction();
}

int Fraction::Get_Numerator()
{
    return Numerator;
}
int Fraction::Get_Denominator()
{
    return Denominator;
}
void Fraction::Set_Numerator(int num)
{
    Numerator = num;
}
void Fraction::Set_Denominator(int num)
{
    if (num == 0)
        throw std::runtime_error("Denominator can not be zero");
    else
        Denominator = num;
}
void Fraction::Reduce_fraction()
{
}
Fraction Fraction::operator+(const Fraction &num)
{
    Fraction a(1, 2);
    return a;
}
Fraction Fraction::operator+(float num)
{
    Fraction a(1, 2);
    return a;
}
Fraction operator+(float num1, const Fraction &num2)
{
    Fraction a(1, 2);
    return a;
}

Fraction Fraction::operator-(const Fraction &num)
{
    Fraction a(1, 2);
    return a;
}
Fraction Fraction::operator-(float num)
{
    Fraction a(1, 2);
    return a;
}
Fraction operator-(float num1, const Fraction &num2)
{
    Fraction a(1, 2);
    return a;
}

Fraction Fraction::operator*(const Fraction &num)
{
    Fraction a(1, 2);
    return a;
}
Fraction Fraction::operator*(float num)
{
    Fraction a(1, 2);
    return a;
}
Fraction operator*(float num1, const Fraction &num2)
{
    Fraction a(1, 2);
    return a;
}

Fraction Fraction::operator/(const Fraction &num)
{
    Fraction a(1, 2);
    return a;
}
Fraction Fraction::operator/(float num)
{
    Fraction a(1, 2);
    return a;
}
Fraction operator/(float num1, const Fraction &num2)
{
    Fraction a(1, 2);
    return a;
}
bool Fraction::operator==(const Fraction &num)
{
    return true;
}
bool Fraction::operator==(float num)
{
    return true;
}
bool operator==(float num1, const Fraction &num2)
{
    return true;
}

bool Fraction::operator>(const Fraction &num)
{
    return true;
}
bool Fraction::operator>(float num)
{
    return true;
}
bool operator>(float num1, const Fraction &num2)
{
    return true;
}

bool Fraction::operator<(const Fraction &num)
{
    return true;
}
bool Fraction::operator<(float num)
{
    return true;
}
bool operator<(float num1, const Fraction &num2)
{
    return true;
}

bool Fraction::operator>=(const Fraction &num)
{
    return true;
}
bool Fraction::operator>=(float num)
{
    return true;
}
bool operator>=(float num1, const Fraction &num2)
{
    return true;
}

bool Fraction::operator<=(const Fraction &num)
{
    return true;
}
bool Fraction::operator<=(float num)
{
    return true;
}
bool operator<=(float num1, const Fraction &num2)
{
    return true;
}

const Fraction Fraction::operator++(int flag) // num++
{
    Fraction a(1, 2);
    return a;
}
Fraction &Fraction::operator++() //++num
{
    return *this;
}

const Fraction Fraction::operator--(int flag) // num--
{
    Fraction a(1, 2);
    return a;
}
Fraction &Fraction::operator--() //--num
{
    return *this;
}

istream &operator>>(istream &input, Fraction &num)
{
    return input;
}
ostream &operator<<(ostream &output, const Fraction &num)
{
    return output;
}
};