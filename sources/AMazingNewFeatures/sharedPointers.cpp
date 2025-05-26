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

int main()
{
    shared_ptr<Test> pT1(new Test);
    shared_ptr<Test> pT3 = pT1;
    {
        shared_ptr<Test> pT2 = make_shared<Test>();
    }

    cout << "Finished" << endl;

    // cout << "Enter any key to continue..." << endl;
    // cin.get();

    return 0;
}