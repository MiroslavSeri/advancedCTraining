#include <iostream>
using namespace std;

struct Test
{
    virtual bool operator()(string &text) = 0;

    virtual ~Test() {}
};

struct MatchTest : public Test
{
    virtual bool operator()(string &text)
    {
        return text == "lion";
    }
};

void chceck(string text, Test &test)
{
    if (test(text))
    {
        cout << "Text matches!" << endl;
    }
    else
    {
        cout << "No matches!" << endl;
    }
}

int main()
{
    MatchTest pred;

    string value = "lion";

    MatchTest m;
    chceck("lion", m);
    cout << pred(value) << endl;
    cout << "Enter any key to continue..." << endl;
    cin.get();

    return 0;
}