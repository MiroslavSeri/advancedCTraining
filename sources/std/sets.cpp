#include <iostream>
#include <set>
using namespace std;

class Test
{
private:
    int id;
    string name;

public:
    Test() : id(0), name("")
    {
    }

    Test(int id, string name) : id(id), name(name)
    {
    }

    void print() const
    {
        cout << id << ": " << name << endl;
    }

    bool operator<(const Test &other) const
    {
        if (name == other.name)
        {
            return id < other.id;
        }
        else
        {
            return name < other.name;
        }
    }
};

int main()
{
    set<int> numbers;

    numbers.insert(50);
    numbers.insert(10);
    numbers.insert(30);
    numbers.insert(20);
    numbers.insert(30);
    numbers.insert(20);

    for (set<int>::iterator it = numbers.begin(); it != numbers.end(); it++)
    {
        cout << *it << endl;
    }

    set<int>::iterator it = numbers.find(30);

    if (it != numbers.end())
    {
        cout << "Found" << *it << endl;
    }
    int num = 0;
    if ((num = numbers.count(30)))
    {
        cout << "Number found" << endl;
    }

    set<Test> tests;

    tests.insert(Test(10, "Mike"));
    tests.insert(Test(10, "John"));
    tests.insert(Test(30, "Mike"));
    tests.insert(Test(20, "Petr"));
    tests.insert(Test(40, "George"));

    for (auto it = tests.begin(); it != tests.end(); it++)
    {

        it->print();
    }
    cout << "Enter any key to continue..." << endl;
    cin.get();

    return 0;
}