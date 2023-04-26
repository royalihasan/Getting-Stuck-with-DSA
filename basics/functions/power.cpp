#include <iostream>
using namespace std;

int power(int n, int expo)
{
    int c = 0;
    int ans = 1;
    while (c < expo)
    {
        ans = ans * n;
        c++;
    }
    return ans;
}

int main(int argc, char const *argv[])
{

    cout << power(15, 2) << endl;
    return 0;
}
