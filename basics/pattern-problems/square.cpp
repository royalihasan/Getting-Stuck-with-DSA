#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int row, col;
    row = col = 5;
    // iterate the row
    for (int i = 0; i < row; i++)
    {

        for (int j = 0; j < col; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
