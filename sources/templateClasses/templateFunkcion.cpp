#include <iostream>
using namespace std;

template <class T>
void print(T n)
{
    cout << n << endl;
}

int main()
{
    print<string>("Hello");
    print<int>(5);

    print("Hi there");
    print(5);
    cout << "Enter any key to continue..." << endl;
    cin.get();

    return 0;
}