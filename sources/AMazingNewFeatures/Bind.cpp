#include <iostream>
#include <functional>

using namespace std;
using namespace placeholders;

class Test
{
public:
    int add(int a, int b, int c)
    {
        cout << a << ", " << b << ", " << c << endl;
        return a + b + c;
    }
};

int run(function<int(int, int)> func)
{
    return func(7, 3);
}

int main()
{
    Test test;
    cout << test.add(1, 2, 3) << endl;

    auto calculator = bind(&Test::add, test, _1, _2, 100);
    cout << calculator(10, 30) << endl;

    cout << run(calculator) << endl;

    cout << "Enter any key to continue..." << endl;
    cin.get();

    return 0;
}