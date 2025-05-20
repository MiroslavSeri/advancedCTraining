#include <iostream>
using namespace std;

template <class T>
void print(T n)
{
    cout << "Template version" << n << endl;
}

void print(int value)
{
    cout << "Not Template version" << value << endl;
}

template <class T>
void show()
{
    cout << T() << endl;
}

int main()
{
    print<string>("Hello");
    print<int>(5);

    print("Hi there");
    print(5);

    show<double>();
    cout << "Enter any key to continue..." << endl;
    cin.get();

    return 0;
}