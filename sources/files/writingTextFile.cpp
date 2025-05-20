#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    // ofstream outf;

    fstream outf;
    string outFileName = "text.txt";

    outf.open(outFileName, ios::out);
    if (outf.is_open())
    {
        outf << "Hello" << endl;
        outf << "123" << endl;
        outf.close();
    }
    else
    {
        cout << "Could not create file: " << outFileName << endl;
    }
    cout << "Enter any key to continue..." << endl;
    cin.get();

    return 0;
}
