#pragma once
#include <iostream>
#include "Fraction.hpp"
using namespace std;

namespace ariel
{
    class Fraction
    {
        int Numerator;
        int Denominator;

    public:
        Fraction(int num1, int num2);
        Fraction(double num);
        int Get_Numerator();
        int Get_Denominator();
        void Set_Numerator(int num);
        void Set_Denominator(int num);
        void Reduce_fraction();
        Fraction operator+(const Fraction &num);
        Fraction operator+(float num);
        friend Fraction operator+(float num1, const Fraction &num2);

        Fraction operator-(const Fraction &num);
        Fraction operator-(float num);
        friend Fraction operator-(float num1, const Fraction &num2);
        
        Fraction operator*(const Fraction &num);
        Fraction operator*(float num);
        friend Fraction operator*(float num1, const Fraction &num2);
        
        Fraction operator/(const Fraction &num);
        Fraction operator/(float num);
        friend Fraction operator/(float num1, const Fraction &num2);
        
        bool operator==(const Fraction &num);
        bool operator==(float num);
        friend bool operator==(float num1, const Fraction &num2);
        
        bool operator>(const Fraction &num);
        bool operator>(float num);
        friend bool operator>(float num1, const Fraction &num2);
        
        bool operator<(const Fraction &num);
        bool operator<(float num);
        friend bool operator<(float num1, const Fraction &num2);
        
        bool operator>=(const Fraction &num);
        bool operator>=(float num);
        friend bool operator>=(float num1, const Fraction &num2);
        
        bool operator<=(const Fraction &num);
        bool operator<=(float num);
        friend bool operator<=(float num1, const Fraction &num2);
        
        const Fraction operator++(int flag); //num++
        Fraction& operator++();//++num

        const Fraction operator--(int flag);//num--
        Fraction& operator--();//--num

        friend istream& operator>> (istream& input, Fraction& num);
        friend ostream& operator<< (ostream& output, const Fraction& num);

    };
};
