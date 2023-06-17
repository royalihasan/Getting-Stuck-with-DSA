#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int N;
    cin >> N;
    int counter = 1;
    for (int row = 1; row <= N; row++)
    {
        int col = 1;
        while (col <= N)
        {
            char ch = 'A' + counter - 1;
            cout << ch
                 << " ";
            col++;
            counter++;
        }
        cout << endl;
    }

    return 0;
}
