#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> sort_digits(int n)
{
    vector<int> digits;
    for (; n > 0; n /= 10)
        digits.push_back(n % 10);
    sort(digits.begin(), digits.end());
    return digits;
}

int to_num(vector<int> digits)
{
    int result = 0;
    for (const int digit : digits)
        result = result * 10 + digit;
    return result;
}

int next(int n)
{
    vector<int> digits = sort_digits(n);
    int smaller = to_num(digits);
    reverse(digits.begin(), digits.end());
    int larger = to_num(digits);
    return larger - smaller;
}

vector<int> kaprekar(int n)
{
    vector<int> seq;
    do
    {
        seq.push_back(n);
        n = next(n);
    }while(n != seq.back());
    return seq;
}

int main(int argc, char* argv[])
{
    int START = stoi(argv[1]);
    vector<int> kap = kaprekar(START);

    for (const int k : kap)
        cout << k << endl;
    return 0;
}
