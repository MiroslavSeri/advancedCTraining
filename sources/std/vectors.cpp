#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<string> strings(5);

    strings.push_back("one");
    strings.push_back("two");
    strings.push_back("three");
    strings[3] = "dog";

    cout << strings[3] << endl;
    cout << strings.size() << endl;

    for (int i = 0; i < strings.size(); i++)
    {
        cout << i << ": " << strings[i] << endl;
    }

    for (vector<string>::iterator it = strings.begin(); it != strings.end(); it++)
    {
        cout << *it << endl;
    }

    for (const auto &str : strings)
    {
        cout << str << endl;
    }

    cout << "Enter any key to continue..." << endl;
    cin.get();

    return 0;
}