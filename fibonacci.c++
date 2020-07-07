#include <iostream>
#include <vector>

using namespace std;

vector<int> fibonacci(int n)
{
    vector<int> fibo = {0, 1};
    for(int i = 2; i <= n; i++)
        fibo.push_back(fibo[i - 1] + fibo[i - 2]);
    return fibo;
}

int main(int argc, char* argv[])
{
    int LENGTH = stoi(argv[1]);

    vector<int> fibo = fibonacci(LENGTH);

    for (const int term : fibo)
        cout << term << "  ";
    cout << endl;
    return 0;
}
