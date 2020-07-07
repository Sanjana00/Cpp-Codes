#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

string sort_digits(int n)
{
    string digits = to_string(n);
    sort(digits.begin(), digits.end());
    return digits;
}

int next(int n)
{
    string digits = sort_digits(n);
    int smaller = stoi(digits);
    reverse(digits.begin(), digits.end());
    int larger = stoi(digits);
    return larger - smaller;
}

vector<int> kaprekar(int n)
{
    vector<int> kaprekar;
    do
    {
        kaprekar.push_back(n);
        n = next(n);
    }while (n != kaprekar.back());
    return kaprekar;
}

int main(int argc, char* argv[])
{
    int START = stoi(argv[1]);
    vector<int> kap = kaprekar(START);

    for (const int k : kap)
        cout << k << endl;
    return 0;
}
