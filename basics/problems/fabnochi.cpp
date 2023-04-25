// Problem: Print a square pattern using while loop

#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int N;
    cin >> N;
    int a = 0;
    int b = 1;
    int COUNTER = 0;
    while (COUNTER < N)
    {
        int nextNumber = a + b;
        cout << nextNumber << "  ";
        a = b;
        b = nextNumber;
        COUNTER++;
    }

    return 0;
}
