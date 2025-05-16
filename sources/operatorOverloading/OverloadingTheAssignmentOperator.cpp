#include <iostream>
using namespace std;

class Test
{
private:
    int id;
    string name;

public:
    Test() : id(0), name("")
    {
        cout << "Default constructor called" << endl;
    }

    Test(int id, string name) : id(id), name(name)
    {
        cout << "Param constructor called" << endl;
    }
    Test(const Test &other)
    {
        *this = other;
        cout << "Copy constructor called" << endl;
    }
    void print()
    {
        cout << id << ": " << name << endl;
    }
    const Test &operator=(const Test &other)
    {
        cout << "Assignment running" << endl;
        if (this != &other)
        {
            id = other.id;
            name = other.name;
        }

        return *this;
    }
};

int main()
{
    Test test1(10, "Mike");
    test1.print();

    Test test2(20, "bob");

    test2 = test1;
    test2.print();

    Test test3;
    test3.operator=(test2);

    Test test4 = test1;
    test4.print();
    cout << "Enter any key to continue..." << endl;
    cin.get();

    return 0;
}