#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{

    int N;
    cin >> N;
    int sum = 0;
    int prod = 1;
    while (N > 0)
    {
        int digit = N % 10; // take the last digit
        //
        sum = sum + digit;
        prod = prod * digit;
        N = N / 10; // escape the digit
    }
    cout << prod - sum << endl;

    return 0;
}
