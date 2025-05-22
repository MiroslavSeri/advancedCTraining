#include <iostream>
using namespace std;

void test(void (*pFunc)())
{
    pFunc();
}

int main()
{

    auto func = []()
    {
        cout << "Hello" << endl;
    };

    func();
    test(func);
    test([]()
         { cout << "Hello again" << endl; });
    cout << "Enter any key to continue..." << endl;
    cin.get();
    return 0;
}