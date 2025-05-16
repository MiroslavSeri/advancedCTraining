#include <iostream>
using namespace std;

void mightGoWrong()
{
    bool error = false;
    bool error2 = true;
    if (error)
    {
        throw "Something is wrong";
    }
    if (error2)
    {
        throw string("Something else went wrong");
    }
}

void usesMightGoWrong()
{
    mightGoWrong();
}

int main()
{
    try
    {
        usesMightGoWrong();
    }

    catch (int e)
    {
        cout << "Error code " << e << endl;
    }
    catch (char const *e)
    {
        cout << "Error message " << e << endl;
    }
    catch (string &e)
    {
        cout << "String Error message " << e << endl;
    }
    cout << "Enter any key to continue..." << endl;
    cin.get();

    return 0;
}