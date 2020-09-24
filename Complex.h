#pragma once
#include <string>
#include <iostream>


class Complex
{
private:

    float real;
    float imaginary;

public:

    friend std::ostream & operator<<( std::ostream &stream, const Complex &P4);

    Complex (float real_, float imaginary_);

    Complex();

    Complex (const Complex & P1);

    Complex & operator=(const Complex & P2);

    Complex operator+(Complex const &B);

    Complex operator-(Complex const & B);

    Complex operator*(Complex const & B);

    void print();

};
