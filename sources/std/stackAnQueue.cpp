#include <iostream>
#include <stack>
#include <queue>
using namespace std;

class Test
{
private:
    string name;

public:
    Test(string name) : name(name)
    {
    }
    ~Test()
    {
        // cout << "Object destroyed" << endl;
    }
    void print()
    {
        cout << name << endl;
    }
};

int main()
{
    // LIFO
    stack<Test> testStack;

    testStack.push(Test("Mike;"));
    testStack.push(Test("John;"));
    testStack.push(Test("Petr;"));
    testStack.push(Test("Sue;"));

    while (testStack.size() != 0)
    {
        testStack.top().print();
        testStack.pop();
    }

    // FIFO
    queue<Test> testQue;

    testQue.push(Test("Mike;"));
    testQue.push(Test("John;"));
    testQue.push(Test("Petr;"));
    testQue.push(Test("Sue;"));

    while (testQue.size() != 0)
    {
        testQue.front().print();
        testQue.pop();
    }
    cout << "Enter any key to continue..." << endl;
    cin.get();

    return 0;
}