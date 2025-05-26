#include <iostream>
#include <vector>
#include <cstring>
using namespace std;

class Test
{
private:
    static const int SIZE = 100;
    int *_pBuffer;

public:
    Test()
    {
        cout << "Default constructor called" << endl;
        _pBuffer = new int[SIZE]{};
        // memset(_pBuffer, 0, sizeof(int[SIZE]));
    }

    Test(int x)
    {
        _pBuffer = new int[SIZE]{};
        for (int i = 0; i < SIZE; i++)
        {
            _pBuffer[i] = 7 * i + x;
        }
        cout << "Param constructor called" << endl;
    }
    Test(const Test &other)
    {
        _pBuffer = new int[SIZE]{};
        memcpy(_pBuffer, other._pBuffer, SIZE * sizeof(int));
        cout << "Copy constructor called" << endl;
    }
    ~Test()
    {
        cout << "Destructor called" << endl;
        delete[] _pBuffer;
    }
    const Test &operator=(const Test &other)
    {
        cout << "Assignment running" << endl;
        _pBuffer = new int[SIZE]{};
        memcpy(_pBuffer, other._pBuffer, SIZE * sizeof(int));

        return *this;
    }
    friend ostream &operator<<(ostream &out, const Test &t);
};

ostream &operator<<(ostream &out, const Test &test)
{
    for (int i = 0; i < test.SIZE; i++)
    {
        out << test._pBuffer[i] << " ";
    }
    out << endl;
    return out;
}

Test getTest()
{
    return Test();
}

int main()
{
    Test test1 = getTest();
    Test &rTest1 = test1;
    // Test &rTest2 = getTest();
    const Test &rTest2 = getTest();
    Test test2(Test(1));

    cout << "Enter any key to continue..." << endl;
    cin.get();

    return 0;
}