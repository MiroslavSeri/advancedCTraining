#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<vector<int>> grid(3, vector<int>(4, 5));

    grid[1].push_back(9);
    for (int row = 0; row < grid.size(); row++)
    {
        for (int col = 0; col < grid[row].size(); col++)
        {
            cout << grid[row][col] << flush;
        }
        cout << endl;
    }

    cout << "Enter any key to continue..." << endl;
    cin.get();

    return 0;
}