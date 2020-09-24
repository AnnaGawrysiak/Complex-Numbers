#include <iostream>
#include <cmath>
#include "Complex.h"

using std::cout;
using std::endl;

    std::ostream & operator <<( std::ostream & stream, const Complex &P4)
    {
    stream << P4.real;// zamiast OP jest stream
    stream << P4.imaginary;

     return stream;
    }


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

	x = y * z;
	cout << "\n\nx = y * z:" << endl;
	x.print();
	cout << " = ";
	y.print();
	cout << " * ";
	z.print();
	cout << endl;

    /*
	x = y / z;
	cout << "\n\nx = y * z:" << endl;
	x.print();
	cout << " = ";
	y.print();
	cout << " : ";
	z.print();
	cout << endl;
    */

	return 0;
}
