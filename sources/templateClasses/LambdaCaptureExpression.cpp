#include <iostream>
using namespace std;

int main()
{
    int one = 1;
    int two = 2;
    int three = 3;

    [one, two]()
    { cout << "Hello " << one << ", " << two << endl; }();

    [=]()
    { cout << "Hello " << one << ", " << two << endl; }();

    [=, &three]()
    {three = 7; cout << "Hello " << one << ", " << two << endl; }();

    cout << three << endl;

    [&]()
    {three = 7; two = 8;cout << "Hello " << one << ", " << two << endl; }();

    [&, two, three]()
    {one = 100;cout << "Hello " << one << ", " << two << endl; }();

    cout << "Enter any key to continue..." << endl;
    cin.get();

    return 0;
}