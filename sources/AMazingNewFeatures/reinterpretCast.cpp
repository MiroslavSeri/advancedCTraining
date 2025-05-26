#include <iostream>
#include <iomanip> // std::hex, std::setw

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
    Sister sister;

    Parent *ppb = &brother;
    cout << ppb << endl;

    // nedefinované chování, danger downcast
    Sister *pb2 = reinterpret_cast<Sister *>(ppb);

    if (pb2 == nullptr)
    {
        cout << "Invalid cast" << endl;
    }
    else
    {
        cout << pb2 << endl;
    }

    int number = 12345678;
    // reinterpretujeme ukazatel na int jako ukazatel na char (byte)
    unsigned char *bytes = reinterpret_cast<unsigned char *>(&number);

    cout << "Byte representation of 0x12345678:" << endl;

    for (int i = 0; i < sizeof(int); ++i)
    {
        cout << "Byte " << i << ": 0x"
             << hex << setw(2) << setfill('0') << (int)bytes[i] << endl;
    }
    cout << "Enter any key to continue..." << endl;
    cin.get();

    return 0;
}