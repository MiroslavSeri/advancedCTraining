#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    // ofstream outf;

    fstream inf;
    string inFileName = "text.txt";
    string line;

    inf.open(inFileName, ios::in);
    if (inf.is_open())
    {
        while (!inf.eof())
        {
            getline(inf, line);
            cout << line << endl;
        }
        inf.close();
    }
    else
    {
        cout << "Could not open file: " << inFileName << endl;
    }
    cout << "Enter any key to continue..." << endl;
    cin.get();

    return 0;
}