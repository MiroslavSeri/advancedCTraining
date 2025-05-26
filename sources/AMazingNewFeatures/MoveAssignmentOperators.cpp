#include <iostream>
#include <vector>
#include <cstring>
using namespace std;

class Test
{
private:
    static const int SIZE = 100;
    int *_pBuffer{nullptr};

public:
    Test()
    {
        cout << "Default constructor called" << endl;
        _pBuffer = new int[SIZE]{};
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
    Test(Test &&other)
    {
        _pBuffer = other._pBuffer;
        other._pBuffer = nullptr;
        cout << "Move constructor called" << endl;
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
    Test &operator=(Test &&other)
    {
        cout << "Move assigment" << endl;
        delete[] _pBuffer;
        _pBuffer = other._pBuffer;
        other._pBuffer = nullptr;

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

void check(const Test &value)
{
    cout << "lValue function!" << endl;
}

void check(Test &&value)
{
    cout << "rValue function!" << endl;
}

Test getTest()
{
    return Test();
}

int main()
{
    Test test1 = getTest();

    // vector<Test> vec;
    // vec.push_back(Test());

    Test &ltest1 = test1;
    Test &&rtest = getTest();

    // check(test1);
    //  check(getTest());
    //  check(Test());
    Test test2 = test1;
    Test test3 = std::move(Test());
    cout << "Enter any key to continue..." << endl;
    cin.get();

    return 0;
}