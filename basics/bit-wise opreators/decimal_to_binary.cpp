#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int N;
    cin >> N;
    while (N > 0)
    {
        int reminder;
        reminder = N % 2;
        int bin;
        if (reminder == 1)
            bin = 0;
        else
            bin = 1;
        cout << "" << reminder;
        // cout << bin << endl;

        reminder = reminder >> 1;
        N = N / 2;
    }
}
