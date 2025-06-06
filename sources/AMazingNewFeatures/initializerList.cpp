#include <iostream>
#include <vector>
#include <initializer_list>

using namespace std;

class Test
{
public:
    Test(initializer_list<string> texts)
    {
        for (auto value : texts)
        {
            cout << value << endl;
        }
    }
    void print(initializer_list<string> texts)
    {
        for (auto value : texts)
        {
            cout << value << endl;
        }
    }
    void print2(Test)
    {
        for (auto value : texts)
        {
            cout << value << endl;
        }
    }
};

int main()
{
    vector<int> numbers = {1, 2, 3, 4, 5};
    cout << numbers[2] << endl;

    Test test{"apple", "orange", "banana"};

    test.print({"one", "two", "three"});
    test.print2();
    cout << "Enter any key to continue..." << endl;
    cin.get();

    return 0;
}