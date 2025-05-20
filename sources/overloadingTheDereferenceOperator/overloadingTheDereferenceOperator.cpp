#include <iostream>
#include "Complex.h"

using namespace std;
using namespace caveofprograming;

int main()
{
    Complex c1(2, 3);
    Complex c2(2, 3);

    cout << *c1 + c2 << endl;
    cout << *c1 + *c2 << endl;
    cout << "overloadingTheDereferenceOperator" << endl;

    cout << "Enter any key to continue..." << endl;
    cin.get();

    return 0;
}