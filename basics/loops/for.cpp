#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{

    int i = 0;
    int N;
    cin >> N;
    for (;;)
    {
        if (i < N)
            cout << i << endl;
        else
            break;
        i++;
    }

    return 0;
}
