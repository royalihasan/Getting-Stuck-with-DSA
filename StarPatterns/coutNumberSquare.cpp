#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int N;
    cin >> N;
    for (int row = 1; row <= N; row++)
    {
        int col = 1;
        while (col <= N)
        {
            cout << N - col + 1
                 << " ";
            col++;
        }
        cout << endl;
    }

    return 0;
}
