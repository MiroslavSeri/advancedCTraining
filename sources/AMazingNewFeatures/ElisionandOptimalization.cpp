#include <iostream>
#include <vector>
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
    ~Test()
    {
        cout << "Destructor called" << endl;
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
    friend ostream &operator<<(ostream &out, const Test &t);
};

ostream &operator<<(ostream &out, const Test &test)
{
    out << test.id << "  " << test.name << endl;
    return out;
}
Test getTest()
{
    return Test();
}

int main()
{
    Test test1 = getTest();

    cout << test1 << endl;

    vector<Test> vec;
    vec.push_back(Test());
    cout << "Enter any key to continue..." << endl;
    cin.get();

    return 0;
}