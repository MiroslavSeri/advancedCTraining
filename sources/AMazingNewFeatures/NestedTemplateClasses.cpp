#include <iostream>
#include "ring.h"
using namespace std;

int main()
{
    ring<int>::iterator it;
    it.print();

    // cout << *it << endl;
    // ring<string> textRing(3);

    // textRing.add("One");
    // textRing.add("Two");
    // textRing.add("Three");
    // textRing.add("four");

    // for (int i = 0; i < textRing.size(); i++)
    // {
    //     cout << textRing.get(i) << endl;
    // }
    cout << "Enter any key to continue..." << endl;
    cin.get();

    return 0;
}