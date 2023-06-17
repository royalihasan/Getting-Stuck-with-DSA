#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{

    int i = 1;
    int N;
    cin >> N;
    int sum = 0;
    for (;;)
    {
        if (i <= N)
            sum = sum + i;
        else
            break;
        i++;
    }
    cout << sum << endl;

    return 0;
}
