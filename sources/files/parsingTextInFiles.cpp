#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
using namespace std;

int main()
{
    // ofstream outf;

    fstream inf;
    string inFileName = "stats.txt";
    string line;

    inf.open(inFileName, ios::in);
    if (inf.is_open())
    {
        while (getline(inf, line))
        {
            stringstream ss(line);
            string city;
            long long population;

            if (getline(ss, city, ':') && ss >> population)
            {
                cout << city << "'" << population << "'" << endl;
            }
            else
            {
                cerr << "Chybný řádek: " << line << endl;
            }
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