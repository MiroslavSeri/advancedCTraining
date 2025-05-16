#include <iostream>
#include <map>
using namespace std;

int main()
{
    map<string, int> ages;

    ages["Mike"] = 40;
    ages["Jana"] = 30;
    ages["Pavel"] = 20;

    cout << ages["Raj"] << endl;
    cout << ages["Sue"] << endl;

    ages.insert(pair<string, int>("Peter", 100));

    if (ages.find("Vicky") != ages.end())
    {
        cout << "Found Vicky" << endl;
    }
    else
    {
        cout << "Key not found" << endl;
    }

    for (map<string, int>::iterator it = ages.begin(); it != ages.end(); it++)
    {
        cout << it->first << " :" << it->second << endl;
    }

    for (map<string, int>::iterator it = ages.begin(); it != ages.end(); it++)
    {
        pair<string, int> age = *it;
        cout << age.first << " :" << age.second << endl;
    }

    cout << "Enter any key to continue..." << endl;
    cin.get();

    return 0;
}