#include <iostream>
#include <typeinfo>
using namespace std;

int main()
{
    string value;
    decltype(value) name = "Bob";

    cout << typeid(value).name() << endl;
    cout << name << endl;
    cout << "Enter any key to continue..." << endl;
    cin.get();

    return 0;
}