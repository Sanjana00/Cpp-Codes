#include <iostream>
#include <vector>

using namespace std;

int term(int n)
{
    if (n % 2 == 0)
        return n / 2;
    return n * 3 + 1;
}

vector<int> collatz(int n)
{
    vector<int> series;
    for (; n != 4; n = term(n))
        series.push_back(n);
    series.push_back(4);
    series.push_back(2);
    series.push_back(1);
    return series;
}

int main(int argc, char* argv[])
{
    int n = stoi(argv[1]);
    vector<int> v = collatz(n);
    for (const int term : v)
        cout << term << ' ';
    cout << endl;
    return 0;
}
