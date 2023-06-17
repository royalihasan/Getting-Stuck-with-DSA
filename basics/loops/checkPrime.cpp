#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{

    int i = 2;
    int N;
    cin >> N;
    bool isPrime = 1;
    while (i < N)
    {

        if (N % i == 0)
        {
            isPrime = 0;
            break;
        }

        i++;
    }
    if (isPrime == 0)
        cout << "Not Prime" << endl;
    else
        cout << "Prime" << endl;

    return 0;
}
