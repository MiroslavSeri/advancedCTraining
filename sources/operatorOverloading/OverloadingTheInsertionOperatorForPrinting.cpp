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

    friend ostream &operator<<(ostream &out, const Test &test)
    {
        out << test.id << ": " << test.name;
        return out;
    }
};

int main()
{
    Test t1(10, "Mike");
    Test t2(20, "Joe");

    cout << t1 << t2 << endl;

    cout << "Enter any key to continue..." << endl;
    cin.get();

    return 0;
}