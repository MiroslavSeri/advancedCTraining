#include <iostream>
using namespace std;

void goesWrong()
{
    bool error1 = true;
    bool error2 = true;

    if (error1)
    {
        throw bad_alloc();
    }
    if (error2)
    {
        throw exception();
    }
}

int main()
{
    try
    {
        goesWrong();
    }

    catch (bad_alloc &e)
    {
        cout << "catching alloc" << e.what() << endl;
    }

    catch (exception &e)
    {
        cout << "catching exception" << e.what() << endl;
    }

    cout << "Enter any key to continue..." << endl;
    cin.get();

    return 0;
}