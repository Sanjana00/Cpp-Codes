#include <iostream>
#include <vector>

using namespace std;

vector<int> next_row(vector<int> row)
{
    vector<int> shift_right = {0};
    for (const int ele : row)
        shift_right.push_back(ele);
    row.push_back(0);
    vector<int> next_row;
    for (int i = 0; i < shift_right.size(); ++i)
        next_row.push_back(row[i] + shift_right[i]);
    return next_row;
}

int main(int argc, char* argv[])
{
    int ROWS = stoi(argv[1]);
    vector<int> row = {1};
    for (int i = 0; i < ROWS; i++)
    {
        for (const int c : row)
            cout << c << "    ";
        cout << endl;
        row = next_row(row);
    }
    return 0;
}
