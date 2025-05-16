#include <iostream>
#include <map>

using namespace std;

int main()
{
    multimap<int, string> lookup;

    lookup.insert(make_pair(30, "Mike"));
    lookup.insert(make_pair(10, "Viky"));
    lookup.insert(make_pair(30, "Raj"));
    lookup.insert(make_pair(400, "Bob"));

    for (multimap<int, string>::iterator it = lookup.begin(); it != lookup.end(); it++)
    {
        cout << it->first << ": " << it->second << endl;
    }
    cout << endl;
    for (multimap<int, string>::iterator it = lookup.find(30); it != lookup.end(); it++)
    {
        cout << it->first << ": " << it->second << endl;
    }
    cout << endl;

    pair<multimap<int, string>::iterator, multimap<int, string>::iterator> its = lookup.equal_range(30);

    for (multimap<int, string>::iterator it = its.first; it != its.second; it++)
    {
        cout << it->first << ": " << it->second << endl;
    }

    auto range = lookup.equal_range(30);
    for (auto it = range.first; it != range.second; it++)
    {
        cout << it->first << ": " << it->second << endl;
    }
    cout << "Enter any key to continue..." << endl;
    cin.get();

    return 0;
}