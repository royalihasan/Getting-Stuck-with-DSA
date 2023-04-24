// Problem: Print a square pattern using while loop

#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int i, j;
    i = j = 4;
    int i_counter, j_counter;
    i_counter = 0;
    j_counter = 0;
    while (i > i_counter)
    {
        while (j > j_counter)
        {
            cout << j_counter << " ";
            j_counter++;
        }

        i_counter++;
        j_counter = 0;
        cout << endl;
    }

    return 0;
}
