#include "Complex.h"

namespace caveofprograming
{

    Complex::Complex() : real(0), imaginary(0)
    {
        cout << "Default" << endl;
    }
    Complex::Complex(double real, double imaginary) : real(real), imaginary(imaginary)
    {
        cout << "Param" << endl;
    }
    Complex::Complex(const Complex &other) : real(other.real), imaginary(other.imaginary)
    {
        cout << "Copy" << endl;
    }

    const Complex &Complex::operator=(const Complex &other)
    {
        real = other.real;
        imaginary = other.imaginary;

        return *this;
    }
    ostream &operator<<(ostream &out, const Complex &c)
    {
        out << "(" << c.getReal() << "," << c.getImaginary() << ")";
        return out;
    }
}