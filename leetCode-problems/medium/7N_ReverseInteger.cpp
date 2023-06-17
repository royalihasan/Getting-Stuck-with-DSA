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
        digit = N % 10; // last digit ;
        answer = answer * 10 + digit;
        // remove the last Digit
        N = N / 10; // Remove the last digit
        i++;
    }
    int range = INT32_MAX;
    if (answer > range)
        cout << "0";
    cout << answer << endl;
}
