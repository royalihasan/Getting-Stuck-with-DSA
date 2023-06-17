#include <iostream>
using namespace std;

int fact(int n)
{
    if (n == 1 || n == 0)
        return 1;
    int c = n;
    int ans = 1;
    while (c > 0)
    {
        ans = ans * c;
        c--;
    }

    return ans;
}

int nCr(int n, int r)
{
    return fact(n) / (fact(r) * fact(n - r));
}

int main(int argc, char const *argv[])
{

    cout << nCr(13, 2) << endl;

    return 0;
}
