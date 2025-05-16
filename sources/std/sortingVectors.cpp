#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Test
{
private:
    int id;
    string name;

public:
    Test(int id, string name) : id(id), name(name) {}
    void print()
    {
        cout << id << ": " << name << endl;
    }
    bool operator<(const Test &other) const
    {
        return name < other.name;
    }
    // friend bool comp(const Test &, const Test &b);
};

// bool comp(const Test &a, const Test &b)
// {
//     return a.id < b.id;
// }

int main()
{
    vector<Test> test;

    test.push_back(Test(5, "Mike"));
    test.push_back(Test(10, "Sue"));
    test.push_back(Test(8, "Raj"));
    test.push_back(Test(3, "Tom"));

    sort(test.begin(), test.end());

    for (int i = 0; i < test.size(); i++)
    {
        test[i].print();
    }

    cout << "Enter any key to continue..." << endl;
    cin.get();

    return 0;
}