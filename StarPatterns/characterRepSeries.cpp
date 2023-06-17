#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int N;
    cin >> N;
    for (int row = 1; row <= N; row++)
    {
        int col = row;
        int counter = row;
        while (col > 0)
        {
            char ch = 'A' + N - col;
            cout << ch
                 << " ";
            col--;
            counter++;
        }
        cout << endl;
    }

    return 0;
}
