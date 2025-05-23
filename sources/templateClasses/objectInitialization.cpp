#include <iostream>

using namespace std;

class Test
{
    int id{3};
    string name{"Mike"};

public:
    Test() = default;
    Test(const Test &other) = default;
    Test &operator=(const Test &other) = delete;
    Test(int id) : id(id)
    {
    }
    void print()
    {
        cout << id << ": " << name << endl;
    }
};

int main()
{
    Test test;
    test.print();

    Test test1(77);
    test1.print();

    Test test2 = test;
    // test2 = test1;
    test2.print();
    cout << "Enter any key to continue..." << endl;
    cin.get();

    return 0;
}