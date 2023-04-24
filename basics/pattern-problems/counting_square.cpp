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

        while (j < n)
        {
            cout << counter << " ";
            counter++;
            j++;
        }
        cout << endl;
        j = 0;
        i++;
    }

    return 0;
}
