#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

bool match(string test)
{
    return test.size() == 3;
}

int countStrings(vector<string> &texts, bool (*test)(string s))
{
    int sum = 0;
    for (int i = 0; i < texts.size(); i++)
    {
        if (test(texts[i]))
        {
            sum++;
        }
    }
    return sum;
}

int main()
{
    vector<string> texts;
    texts.push_back("one");
    texts.push_back("two");
    texts.push_back("three");
    texts.push_back("four");
    texts.push_back("two");
    texts.push_back("six");
    texts.push_back("zero");

    cout << match("one") << endl;

    cout << count_if(texts.begin(), texts.end(), match) << endl;
    cout << countStrings(texts, match) << endl;

    cout << "Enter any key to continue..." << endl;
    cin.get();

    return 0;
}