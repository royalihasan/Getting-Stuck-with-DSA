#include <iostream>
#include <math.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int N;
    cin >> N;
    int i = 0;
    int answer = 0;
    int M = N;
    int mask = 0;
    while (M != 0)
    {
        mask = (mask << 1) | 1; // 0000000... 111

        M = M >> 1; // 3 time // 00000000... 101
    }
    answer = (~N) & mask;
    cout
        << answer << endl;
}
