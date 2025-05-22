#include <iostream>
using namespace std;

int main()
{
    int cats = 5;
    [cats]() mutable
    { cats = 8; cout << cats << endl; }();
    cout << "Enter any key to continue..." << endl;
    cin.get();

    return 0;
}