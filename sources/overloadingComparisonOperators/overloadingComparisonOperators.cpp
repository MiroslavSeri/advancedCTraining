#include <iostream>
#include "Complex.h"

using namespace std;
using namespace caveofprograming;

int main()
{
    Complex c1(2, 3);
    Complex c2(2, 3);

    if (c1 == c2)
    {
        cout << "Equals" << endl;
    }
    if (c1 != c2)
    {
        cout << "Not Equals" << endl;
    }
    cout << "overloadingComparisonOperators" << endl;

    cout << "Enter any key to continue..." << endl;
    cin.get();

    return 0;
}