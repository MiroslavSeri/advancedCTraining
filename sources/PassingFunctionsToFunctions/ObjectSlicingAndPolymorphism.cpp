#include <iostream>
using namespace std;

class Parent
{
private:
    int one;

public:
    Parent() : one(0)
    {
        cout << "Parent Default constructor" << endl;
    }
    Parent(int one) : one(one)
    {
        cout << "Parent Param constructor" << endl;
    }
    Parent(const Parent &other)
    {
        one = other.one;
        cout << "Parent Copy constructor" << endl;
    }
    virtual void print()
    {
        cout << "Parent" << endl;
    }
};

class Child : public Parent
{
private:
    int two;

public:
    Child() : two(0)
    {
        cout << "Child Default constructor" << endl;
    }
    Child(int two) : two(two)
    {
        cout << "Child Param constructor" << endl;
    }
    Child(const Child &other)
    {
        two = other.two;
        cout << "Child Copy constructor" << endl;
    }
    void print()
    {
        cout << "Child" << endl;
    }
};

int main()
{
    Child c1(5);
    Parent &p1 = c1;
    p1.print();

    Parent p2 = Child();
    p2.print();

    Parent *ptr = &c1;
    ptr->print(); // ✅ taky vypíše "Child"

    cout << "Enter any key to continue..." << endl;
    cin.get();

    return 0;
}