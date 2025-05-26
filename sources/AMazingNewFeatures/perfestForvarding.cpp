#include <iostream>
using namespace std;

class Test
{
};

template <typename T>
void call(T &&arg)
{
    // check(static_cast<T>(arg));
    // check((arg));
    check(forward<T>(arg));
}

void check(Test &test)
{
    cout << "lValue" << endl;
}

void check(Test &&test)
{
    cout << "rValue" << endl;
}

int main()
{
    Test test;
    auto &&t = test;

    call(Test());
    call(test);

    cout << "Enter any key to continue..." << endl;
    cin.get();

    return 0;
}