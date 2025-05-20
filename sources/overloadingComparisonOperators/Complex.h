#ifndef COMPLEX_H_
#define COMPLEX_H_

#include <iostream>

namespace caveofprograming
{
    class Complex
    {
    private:
        double real;
        double imaginary;

    public:
        Complex();
        Complex(double real, double imaginary);
        Complex(const Complex &other);
        const Complex &operator=(const Complex &other);

        double getReal() const { return real; }
        double getImaginary() const { return imaginary; }

        bool operator==(const Complex &other) const;
        bool operator!=(const Complex &other) const;
    };

    std::ostream &operator<<(std::ostream &out, const Complex &c);
    Complex operator+(const Complex &c1, const Complex &c2);
    Complex operator+(const Complex &c1, double d2);
    Complex operator+(double d2, const Complex &c1);

}

#endif // COMPLEX_H_