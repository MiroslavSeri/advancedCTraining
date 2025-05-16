#include <iostream>
#include <list>

using namespace std;

int main()
{
    list<int> numbers;

    numbers.push_back(1);
    numbers.push_back(2);
    numbers.push_back(3);
    list<int>::iterator it = numbers.begin();
    it++;
    numbers.insert(it, 100);
    cout << *it << endl;

    for (list<int>::iterator it = numbers.begin(); it != numbers.end(); it++)
    {
        cout << *it << endl;
    }

    cout << "Enter any key to continue..." << endl;
    cin.get();

    return 0;
}