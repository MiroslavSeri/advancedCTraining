#include <iostream>
using namespace std;

class Parent
{
    int dogs;
    string text;

public:
    Parent() : Parent("cus")
    {
        dogs = 5;
        cout << "No parametr parent constructor" << dogs << endl;
    }
    Parent(string text)
    {
        dogs = 8;
        this->text = text;
        cout << "String parent constructor" << dogs << endl;
    }
};

class Child : public Parent
{
    string t;

public:
    Child()
    {
        cout << "No parametr child constructor" << endl;
    }
    Child(string t) : t(t)
    {
        cout << "String child constructor" << endl;
    }
};

main()
{
    Parent parent;
    Child child;
    Parent p2("Hello");
    Child c("Prd");
    cout << "Enter any key to continue..." << endl;
    cin.get();

    return 0;
}