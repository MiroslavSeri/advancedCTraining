#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int values[] = {1, 4, 5};

    cout << values[0] << endl;

    class C
    {
    public:
        string text;
        int id;
    };

    C c1 = {"Hello", 7};
    cout << c1.text << endl;

    struct S
    {
    public:
        string text;
        int id;
    };

    S s1 = {"Hello", 7};
    cout << s1.text << endl;

    struct R
    {
    public:
        string text;
        int id;
    } r1;

    r1 = {"Hello", 7};
    cout << r1.text << endl;

    struct
    {
    public:
        string text;
        int id;
    } r3 = {"Hello", 7}, r2 = {"Hello", 7};

    cout << r3.text << endl;
    cout << r2.text << endl;
    cout << "Enter any key to continue..." << endl;
    cin.get();

    vector<string> strings;

    strings.push_back("one");
    strings.push_back("two");
    strings.push_back("three");
    return 0;
}