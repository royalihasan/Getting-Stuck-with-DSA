#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int n, i = 0;
    int counter = 0;
    int j = 0;
    cin >> n;
    while (i < n)
    {
        int j = n-i;
        while (j > 0)
        {
            cout << "*"<<j
                 << " ";
            j--;
        }
        cout << endl;
        i++;
    }

    return 0;
}
