#include <iostream>
using namespace std;
int hammingWeight(uint32_t n)
{
    int ones = 0;
    while (n != 0)
    {
        if (n & 1)
            ones++;
        n = n >> 1;
    }
    return ones;
}
int main(int argc, char const *argv[])
{
    cout << hammingWeight(00000000000000000000100000010) << " "
         << "Ones" << endl;

    return 0;
}
