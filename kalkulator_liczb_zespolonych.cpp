#include <iostream>

using std::cout;
using std::endl;

class Complex
{
private:

    float real;
    float imaginary;

public:

    Complex (float real_, float imaginary_)
        {
            real = real_;
            imaginary = imaginary_;
        };

    Complex()
        {
            real = 0;
            imaginary = 0;
        };

    Complex (const Complex & P1)
        {
            real = P1.real;
            imaginary = P1.imaginary;
        };

    Complex & operator=(const Complex & P2) // to, co jest zwracane tj. ta lewa strona.
    {
        if (&P2 != this)
        {
            real = P2.real;
            imaginary = P2.imaginary;
        }
    }

    Complex operator+(Complex B)
    {
        return Complex (real + B.real, imaginary + B.imaginary);
    }


    Complex operator-(Complex B)
    {

        return Complex (real - B.real, imaginary - B.imaginary);
    }

    /*float get_real()
        {
            return real;
        }

    float get_imaginary()
        {
            return imaginary;
        }
    */


    void print()
    {
        cout << real<< endl;
        cout << imaginary << endl;
    }

};

int main()
{
	Complex x;
	Complex y( 4.3, 8.2 );
	Complex z( 3.3, 1.1 );

	cout << "x: ";
	x.print();
	cout << "\ny: ";
	y.print();
	cout << "\nz: ";
	z.print();

	x = y + z;
	cout << "\n\nx = y + z:" << endl;
	x.print();
	cout << " = ";
	y.print();
	cout << " + ";
	z.print();

	x = y - z;
	cout << "\n\nx = y - z:" << endl;
	x.print();
	cout << " = ";
	y.print();
	cout << " - ";
	z.print();
	cout << endl;

	return 0;
}
