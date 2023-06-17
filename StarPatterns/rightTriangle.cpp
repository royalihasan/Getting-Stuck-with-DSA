#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int N;
    cin >> N;
    int counter = 1;
    for (int row = 1; row <= N; row++)
    {
        int space = N - row;
        while (space)
        {
            cout << " ";
            space--;
        }
        int col = 1;
        while (col <= row)
        {
            cout << "*";
            col++;
        }

        cout << endl;
    }

    return 0;
}
