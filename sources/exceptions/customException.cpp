#include <iostream>
#include <exception>
using namespace std;

class MyException : public exception
{
public:
    MyException()
    {
        std::cout << "MyException constructor called!" << std::endl;
    }

    virtual const char *what() const noexcept override
    {
        return "Something bad Happened!";
    }
};

class Test
{
public:
    void goesWrong()
    {
        throw MyException();
    }
};

int main()
{
    Test test;

    try
    {
        test.goesWrong();
    }
    catch (MyException &e)
    {
        cout << e.what() << endl;
    }
    cout << "Enter any key to continue..." << endl;
    cin.get();

    return 0;
}