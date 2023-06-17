#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int N;
    cin >> N;
    for (int row = 0; row < N; row++)
    {
        int col = 1;
        while (col <= N)
        {
            cout << "*"
                 << " ";
            col++;
        }
        cout << endl;
    }

    return 0;
}
