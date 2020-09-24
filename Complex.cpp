#include <iostream>
#include <string>
#include "Complex.h"

using namespace std;

    Complex::Complex (float real_, float imaginary_)
        {
            real = real_;
            imaginary = imaginary_;
        };

    Complex::Complex()
        {
            real = 0;
            imaginary = 0;
        };

    Complex::Complex (const Complex & P1)
        {
            real = P1.real;
            imaginary = P1.imaginary;
        };

    Complex & Complex::operator=(const Complex & P2)
    {
        if (&P2 != this)
        {
            real = P2.real;
            imaginary = P2.imaginary;
        }

    return *this;
    }

    Complex Complex:: operator+(Complex const &B) // dodaj ampersand, aby nie sumowac tylko dwoch
    {
        float param1 = real + B.real;
        float param2 = imaginary + B.imaginary;

        return Complex(param1, param2); // zwracamy nowy obiekt, poniewaz nie chcemy stracic poprzednich zmiennych
    }


    Complex Complex:: operator-(Complex const & B)
    {

        return Complex (real - B.real, imaginary - B.imaginary);
    }

    Complex Complex:: operator*(Complex const & B)
    {
        float param1 = real * B.real;
        float param2 = imaginary * B.real;
        float param3 = (imaginary * B.imaginary)* (-1);
        float param4 = real * B.imaginary;

        return Complex (param1 + param3, param2 + param4);
    }

    void Complex::print()
    {
        cout << real << " ";
        cout << imaginary << " ";
    }

