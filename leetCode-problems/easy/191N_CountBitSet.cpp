#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    uint32_t N;
    cin >> N;
    int setBits = 0;
    while (N != 0)
    {
        cout << N << endl;
        if (N & 1)
        {
            setBits++;
        }
        N = N >> 1;
    }

    cout << setBits << endl;

    return 0;
}
