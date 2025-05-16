#include <iostream>
#include <vector>
#include <map>

using namespace std;

int main()
{
    map<string, vector<int>> scores;

    scores["Mike"].push_back(10);
    scores["John"].push_back(15);
    scores["Steve"].push_back(8);
    scores["Ann"].push_back(6);

    for (auto it = scores.begin(); it != scores.end(); it++)
    {
        string name = it->first;
        auto scorelist = it->second;

        cout << name << ": " << flush;

        for (int i = 0; i < scorelist.size(); i++)
        {
            cout << scorelist[i] << " " << flush;
        }
        cout << endl;
    }
    cout << "Enter any key to continue..." << endl;
    cin.get();

    return 0;
}