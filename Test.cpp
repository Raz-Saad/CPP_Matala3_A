#include "doctest.h"
#include <iostream>
#include <stdexcept>
#include <algorithm> 
#include "sources/Fraction.hpp"
using namespace std;
using namespace ariel;


TEST_CASE("Test 1 - Check initialize") {
    Fraction num1(10, 5);
    Fraction num2(3, 3);
    CHECK(__gcd(num1.Get_Numerator(), num1.Get_Denominator()) == 1);
    CHECK(__gcd(num2.Get_Numerator(), num2.Get_Denominator()) != 1);
}

TEST_CASE("Test 2 - Check throws for denominator = 0") {

    CHECK_THROWS(Fraction(3,0)); 
}

TEST_CASE("Test 3 - Check + operation , and set get functions") {
    Fraction num1(10, 5);
    Fraction num2(3, 3);
    float num3=3.5;
    Fraction num4 = num1+num2;

    CHECK(((num4.Get_Numerator() == 3) && (num4.Get_Denominator() == 1)));

    num4=num1+num3;
    CHECK(((num4.Get_Numerator() == 11) && (num4.Get_Denominator() == 2)));

    num1.Set_Numerator(5);
    num1.Set_Numerator(12);
    num2.Set_Denominator(3);
    num2.Set_Denominator(4);

    CHECK(((num1.Get_Numerator() == 5) && (num1.Get_Denominator() == 12)));
    CHECK(((num2.Get_Numerator() == 3) && (num2.Get_Denominator() == 4)));
    

}

TEST_CASE("Test 4 - Check - operation") {
    Fraction num1(3, 5);
    Fraction num2(1, 5);
    float num3=0.4;
    Fraction num4 = num1-num2;

    CHECK(((num4.Get_Numerator() == 2) && (num4.Get_Denominator() == 5)));

    num4=num1-num3;
    CHECK(((num4.Get_Numerator() == 1) && (num4.Get_Denominator() == 5)));

}

TEST_CASE("Test 5 - Check * operation") {
    Fraction num1(5, 10);
    Fraction num2(3, 10);
    float num3=2.5;
    Fraction num4 = num1*num2;

    CHECK(((num4.Get_Numerator() == 3) && (num4.Get_Denominator() == 20)));
    CHECK(__gcd(num4.Get_Numerator(), num4.Get_Denominator()) == 1);

    num4=num1*num3;
    CHECK(((num4.Get_Numerator() == 5) && (num4.Get_Denominator() == 4)));
    CHECK(__gcd(num4.Get_Numerator(), num4.Get_Denominator()) == 1);

}

TEST_CASE("Test 6 - Check / operation") {
    Fraction num1(1, 2);
    Fraction num2(1, 3);
    float num3=0.4;
    Fraction num4 = num1/num2;

    CHECK(((num4.Get_Numerator() == 3) && (num4.Get_Denominator() == 2)));
    CHECK(__gcd(num4.Get_Numerator(), num4.Get_Denominator()) == 1);

    num4=num1/num3;

    CHECK(((num4.Get_Numerator() == 5) && (num4.Get_Denominator() == 4)));
    CHECK(__gcd(num4.Get_Numerator(), num4.Get_Denominator()) == 1);

}

TEST_CASE("Test 7 - Check == operation") {
    Fraction num1(3, 5);
    Fraction num2(1, 5);

    float num3=0.6;

    CHECK_FALSE(num1==num2);
    CHECK(num1==num3);

}

TEST_CASE("Test 8 - Check >= operation") {
    Fraction num1(3, 5);
    Fraction num2(4, 5);
    float num3=0.9;
    float num4=0.8;

    CHECK_FALSE(num1>=num2);
    CHECK(num3>=num1); 
    CHECK(num2>=num4); 

}
TEST_CASE("Test 9 - Check <= operation") {
    Fraction num1(3, 5);
    Fraction num2(4, 5);
    float num3=0.9;
    float num4=0.8;

    CHECK(num1<=num2);
    CHECK_FALSE(num3<=num1); 
    CHECK(num2<=num4); 

}

TEST_CASE("Test 10 - Check > operation") {
    Fraction num1(3, 5);
    Fraction num2(4, 5);
    float num3=0.9;
    float num4=0.8;

    CHECK(num2>num1);
    CHECK(num3>num1); 
    CHECK_FALSE(num2>num4); 


}

TEST_CASE("Test 11 - Check < operation") {
    Fraction num1(3, 5);
    Fraction num2(4, 5);
    float num3=0.9;
    float num4=0.8;

    CHECK(num1<num2);
    CHECK_FALSE(num3<num1); 
    CHECK_FALSE(num2<num4); 

}

TEST_CASE("Test 12 - Check ++ operation") {
    Fraction num1(3, 6);
    Fraction num2(4, 5);

    Fraction num3 = num1++;
    CHECK(((num3.Get_Numerator() == 1) && (num3.Get_Denominator() == 2)));
    CHECK(__gcd(num3.Get_Numerator(), num3.Get_Denominator()) == 1);
    CHECK(((num1.Get_Numerator() == 3) && (num1.Get_Denominator() == 2)));
    
    Fraction num4 = ++num2;
    CHECK(((num4.Get_Numerator() == 9) && (num4.Get_Denominator() == 5)));
    CHECK(__gcd(num4.Get_Numerator(), num4.Get_Denominator()) == 1);
    CHECK(((num2.Get_Numerator() == 9) && (num2.Get_Denominator() == 5)));

}

TEST_CASE("Test 13 - Check -- operation") {
    Fraction num1(10, 6);
    Fraction num2(13, 5);

    Fraction num3 = num1--;
    CHECK(((num3.Get_Numerator() == 5) && (num3.Get_Denominator() == 3)));
    CHECK(__gcd(num3.Get_Numerator(), num3.Get_Denominator()) == 1);
    CHECK(((num1.Get_Numerator() == 2) && (num1.Get_Denominator() == 3)));
    
    Fraction num4 = --num2;
    CHECK(((num4.Get_Numerator() == 8) && (num4.Get_Denominator() == 5)));
    CHECK(__gcd(num4.Get_Numerator(), num4.Get_Denominator()) == 1);
    CHECK(((num2.Get_Numerator() == 8) && (num2.Get_Denominator() == 5)));

}

TEST_CASE("Test 14 - Check throw / 0 ") {
    Fraction num1(3,2);
    CHECK_THROWS(num1/0); 
}

TEST_CASE("Test 15 - Check combination of operations ") {
    Fraction num1(3,2);
    Fraction num2(5,2);
    float num3 = 0.6;
    Fraction num4 = ((num1+num2)/num2)*num3;

    CHECK(((num4.Get_Numerator() == 24) && (num4.Get_Denominator() == 25)));
    CHECK(__gcd(num4.Get_Numerator(), num4.Get_Denominator()) == 1);
}
