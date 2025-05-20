#include <iostream>
#include "ring.h"
using namespace std;

int main()
{
    ring<string> textRing(3);

    textRing.add("One");
    textRing.add("Two");
    textRing.add("Three");
    textRing.add("four");

    for (int i = 0; i < textRing.size(); i++)
    {
        cout << textRing.get(i) << endl;
    }

    for (ring<string>::iterator it = textRing.begin(); it != textRing.end(); it++)
    {
        cout << *it << endl;
    }
    cout << endl;
    for (auto value : textRing)
    {
        cout << value << endl;
    }

    cout << "Enter any key to continue..." << endl;
    cin.get();

    return 0;
}