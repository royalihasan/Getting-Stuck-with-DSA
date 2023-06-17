#include <iostream>
#include <math.h>
using namespace std;

bool powerOfTow(int B, int pow, int N) // 2^3
{
    int i = 1;
    int ans = 1;
    bool isPower = false;
    while (i <= pow)
    {
        if (N == 1 || N == 0)
            return true;

        ans = ans * B; 
        if (N == ans)
        {
            isPower = true;
            break;
        }
        else
            isPower = false;

        i++;
    }
    return isPower;
}

int main(int argc, char const *argv[])
{
    int N;
    cin >> N;
    if (powerOfTow(2, 31, N))
        cout << "True" << endl;
    else
        cout << "Fasle" << endl;
}
