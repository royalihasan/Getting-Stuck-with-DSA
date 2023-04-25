// Problem: Print a square pattern using while loop

#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int N;
    cin >> N;
    int prod = 1;
    int sum = 0;
    int diff;
    while (N > 0)
    {

        int digit = N % 10;
        sum += digit;
        prod *= digit;
        N = N / 10;
    }
    diff = sum - prod;
    cout << diff << endl;

    return 0;
}
