#include <iostream>
#include <fstream>
#include <string>

using namespace std;

#pragma pack(push, 1)
struct Person
{
    char name[50];
    int age;
    double weight;
};
#pragma pack(pop)

int main()
{
    string fileName = "test.bin";
    Person some = {"Frodo", 220, 0.8};
    Person p2 = {};
    /// write binary files//////
    ofstream outf;

    outf.open(fileName, ios::binary);

    if (outf.is_open())
    {
        outf.write(reinterpret_cast<char *>(&some), sizeof(Person));

        outf.close();
    }
    else
    {
        cout << "Could not open file" << endl;
    }

    /////read binary files////////

    ifstream inf;

    inf.open(fileName, ios::binary);
    if (inf.is_open())
    {
        inf.read(reinterpret_cast<char *>(&p2), sizeof(Person));
        inf.close();
    }
    else
    {
        cout << "Could not read file" << endl;
    }
    cout << p2.name << " ," << p2.age << ", " << p2.weight << endl;
    cout << sizeof(Person) << endl;

    cout << "Enter any key to continue..." << endl;
    cin.get();

    return 0;
}