#include <iostream>
using namespace std;

class Parent
{
public:
    virtual void speak()
    {
        cout << "Parent" << endl;
    }
};

class Brother : public Parent
{
};

class Sister : public Parent
{
};

int main()
{
    Parent parent;
    Brother brother;

    Parent *ppb = &parent;
    cout << ppb << endl;

    // nedefinované chování, danger downcast
    Brother *pb2 = dynamic_cast<Brother *>(ppb);

    if (pb2 == nullptr)
    {
        cout << "Invalid cast" << endl;
    }
    else
    {
        cout << pb2 << endl;
    }
    cout << "Enter any key to continue..." << endl;
    cin.get();

    return 0;
}