#include <iostream>
#include <vector>
#include <string>

using namespace std;

string term(int n)
{
    int binary = (int)(n % 3 == 0) + (int)(n % 5 == 0) * 2;
    vector<string> terms = {to_string(n), "FIZZ", "BUZZ", "FIZZBUZZ"};
    return terms[binary];
}

vector<string> seq(int n)
{
    vector<string> fizzbuzz;
    for (int i = 1; i <= n; i++)
        fizzbuzz.push_back(term(i));
    return fizzbuzz;
}

int main(int argc, char* argv[])
{
    int LENGTH = stoi(argv[1]);

    vector<string> fizzbuzz = seq(LENGTH);
    for (const string term : fizzbuzz)
        cout << term << "    ";
    cout << endl;
    return 0;
}
