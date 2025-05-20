#include "Complex.h"

namespace caveofprograming
{

    Complex::Complex() : real(0), imaginary(0)
    {
        std::cout << "Default" << std::endl;
    }
    Complex::Complex(double real, double imaginary) : real(real), imaginary(imaginary)
    {
        std::cout << "Param" << std::endl;
    }
    Complex::Complex(const Complex &other) : real(other.real), imaginary(other.imaginary)
    {
        std::cout << "Copy" << std::endl;
    }

    const Complex &Complex::operator=(const Complex &other)
    {
        real = other.real;
        imaginary = other.imaginary;

        return *this;
    }
    std::ostream &operator<<(std::ostream &out, const Complex &c)
    {
        out << "(" << c.getReal() << "," << c.getImaginary() << ")";
        return out;
    }

    Complex operator+(const Complex &c1, const Complex &c2)
    {
        return Complex(c1.getReal() + c2.getReal(), c1.getImaginary() + c2.getImaginary());
    }

    Complex operator+(const Complex &c1, double d2)
    {
        return Complex(c1.getReal() + d2, c1.getImaginary());
    }
    Complex operator+(double d2, const Complex &c1)
    {
        return Complex(c1.getReal() + d2, c1.getImaginary());
    }

    bool Complex::operator==(const Complex &other) const
    {
        return (real == other.real) && (imaginary == other.imaginary);
    }
    bool Complex::operator!=(const Complex &other) const
    {
        return !(*this == other);
    }
    Complex Complex::operator*() const
    {
        return Complex(real, -imaginary);
    }

}