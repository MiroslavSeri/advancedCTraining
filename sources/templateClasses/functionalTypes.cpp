#include <iostream>
#include <functional>
#include <vector>
#include <algorithm>
using namespace std;

bool check(string &test)
{
    return test.size() == 5;
}

class Check
{
public:
    bool operator()(string &test)
    {
        return test.size() == 5;
    }
} check1;

void run(function<bool(string &)> check)
{
    string test = "dog";
    cout << check(test) << endl;
}

int main()
{
    vector<string> vec{"one", "two", "three"};
    int size = 5;
    auto lambda = [size](string test)
    { return test.size() == size; };

    cout << count_if(vec.begin(), vec.end(), [size](string test)
                     { return test.size() == size; })
         << endl;
    cout << count_if(vec.begin(), vec.end(), check) << endl;
    cout << count_if(vec.begin(), vec.end(), check1) << endl;

    run(lambda);
    run(check1);

    function<int(int, int)> add = [](int one, int two)
    { return one + two; };

    cout << add(7, 30) << endl;
    cout << "Enter any key to continue..." << endl;
    cin.get();

    return 0;
}