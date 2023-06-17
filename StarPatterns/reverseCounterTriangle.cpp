#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int N;
    cin >> N;
    for (int row = 1; row <= N; row++)
    {
        int col = row;
        while (col > 0)
        {
            cout << col
                 << " ";
            col--;
        }
        cout << endl;
    }

    return 0;
}
