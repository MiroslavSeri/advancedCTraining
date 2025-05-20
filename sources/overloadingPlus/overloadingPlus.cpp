#include <iostream>
#include "Complex.h"

using namespace std;
using namespace caveofprograming;

int main()
{
    Complex c1(2, 3);
    Complex c2(6, 7);
    Complex c3 = c1 + c2;

    cout << "OverloadingPlus" << endl;
    cout << c1 << endl;
    cout << c1 + c2 + c3 << endl;

    Complex c4(4, 2);
    Complex c5 = c4 + 7;
    cout << c5 << endl;

    Complex c6(1, 7);

    cout << c6 + 3.2 << endl;
    cout << 3.2 + c6 << endl;
    cout << "Enter any key to continue..." << endl;
    cin.get();

    return 0;
}