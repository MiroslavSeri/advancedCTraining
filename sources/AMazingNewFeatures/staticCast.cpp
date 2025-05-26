#include <iostream>
using namespace std;

class Parent
{
public:
    void speak()
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

    float value = 3.23;

    cout << (int)value << endl;
    cout << static_cast<int>(value) << endl;

    // Brother *pb = &parent;
    Parent *ppb = &brother;
    // nedefinované chování, danger downcast
    Brother *pb2 = static_cast<Brother *>(&parent);
    cout << pb2 << endl;
    cout << ppb << endl;

    // Brother *pbb = ppb;
    Brother *pbb = static_cast<Brother *>(ppb);

    Parent &&p = Parent();

    Parent &&p2 = static_cast<Parent &&>(parent);
    p.speak();
    p2.speak();

    cout << pbb << endl;
    cout << "Enter any key to continue..." << endl;
    cin.get();

    return 0;
}