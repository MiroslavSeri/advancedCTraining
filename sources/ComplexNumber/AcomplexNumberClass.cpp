#include <iostream>
#include "Complex.h"

using namespace std;
using namespace caveofprograming;

int main()
{
    Complex c1(2, 3);
    Complex c2 = c1;
    cout << "ComplexNumber" << endl;
    c1 = c2;
    cout << c2 << endl;
    cout << "Enter any key to continue..." << endl;
    cin.get();

    return 0;
}