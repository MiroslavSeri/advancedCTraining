#include <iostream>
using namespace std;

class Test
{
private:
    int one{1};
    int two{2};

public:
    void run()
    {
        int three{3};
        int four{4};
        // auto pLambda = [this, three, four]()
        auto pLambda = [&, this]()
        {
            one = 111;
            cout << one << endl;
            cout << two << endl;
            cout << three << endl;
            cout << four << endl;
        };
        pLambda();
    }
};

int main()
{
    Test test;
    test.run();
    cout << "Enter any key to continue..." << endl;
    cin.get();

    return 0;
}