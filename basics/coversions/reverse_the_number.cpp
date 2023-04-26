#include <iostream>
#include <math.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int N;
    cin >> N;
    int COUNTER = 0;
    int ans = 0;

    while (N > 0)
    {
        int digit = N % 10;
        ans = digit * pow(10, COUNTER) + ans;

        N = N / 10;

        COUNTER++;
    }
    cout << ans << endl;
}
