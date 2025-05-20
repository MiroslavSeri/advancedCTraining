#include <iostream>
using namespace std;

void test()
{
    cout << "Hello" << endl;
}

void test1(int value)
{
    cout << "Hello" << value << endl;
}

int main()
{
    test();

    void (*pTest)();
    void (*pTest1)(int) = test1;
    pTest = test;

    (*pTest)();
    pTest();
    pTest1(10);
    cout << "Enter any key to continue..." << endl;
    cin.get();

    return 0;
}