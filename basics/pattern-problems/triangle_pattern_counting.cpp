#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int n, i = 0;
    int counter = 0;
    int j = 0;
    int COUNTER = 0;
    cin >> n;
    while (i < n)
    {
        int j = 1;
        while (j < n)
        {
            if (j <= i)
            {
                cout << COUNTER
                     << " ";
                COUNTER++;
            }

            else
                cout << " ";
            j++;
        }
        cout << endl;
        i++;
    }

    return 0;
}
