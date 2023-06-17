#include <iostream>
#include <math.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int N;
    cin >> N;
    int i = 0;
    int answer = 0;
    while (N != 0)
    {
        int digit;
        digit = N % 10; // N %2;
        if (digit == 1)
            answer = answer + pow(2, i);
        // remove the last Digit
        N = N / 10; // N =N/2
        i++;
    }
    cout << answer << endl;
}
