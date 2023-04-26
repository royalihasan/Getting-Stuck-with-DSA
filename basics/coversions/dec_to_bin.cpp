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
        int bit = N & 1;
        ans = bit * pow(10, COUNTER) + ans;

        N = N >> 1;

        COUNTER++;
    }
    cout << ans << endl;
}
