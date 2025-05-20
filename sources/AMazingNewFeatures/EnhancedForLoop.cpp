#include <iostream>
#include <vector>
using namespace std;

int main()
{
    auto texts = {"one", "two", "three"};

    for (auto text : texts)
    {
        cout << text << endl;
    }

    vector<int> numbers;
    numbers.push_back(50);
    numbers.push_back(60);
    numbers.push_back(70);
    numbers.push_back(80);
    numbers.push_back(90);
    numbers.push_back(10);

    for (auto number : numbers)
    {
        cout << number << endl;
    }

    string s = "Polib mi prdel";

    for (auto c : s)
    {
        cout << c << endl;
    }
    cout << "Enter any key to continue..." << endl;
    cin.get();

    return 0;
}
