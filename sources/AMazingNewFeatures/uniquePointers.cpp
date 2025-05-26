#include <iostream>
#include <memory>
using namespace std;

class Test
{
public:
    Test()
    {
        cout << "created" << endl;
    }
    void greet()
    {
        cout << "Hello" << endl;
    }
    ~Test()
    {
        cout << "Destroyed" << endl;
    }
};

class Temp
{
private:
    unique_ptr<Test[]> pTest;

public:
    Temp() : pTest(new Test[2])
    {
    }
};

int main()
{
    // {
    //     unique_ptr<Test[]> pTest(new Test[2]);
    //     pTest[1].greet();
    // }

    Temp temp;
    cout << "Finished" << endl;

    cout << "Enter any key to continue..." << endl;
    cin.get();

    return 0;
}