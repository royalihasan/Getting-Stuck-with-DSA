#include <iostream>
using namespace std;

int uniqueFind(int arr[], int len)
{
    int c = 0;
    int ans = 0;
    while (c <= len - 1)
    {
        ans = ans ^ arr[c];

        c++;
    }
    return ans;
}

int main(int argc, char const *argv[])
{
    int arr[7] = {2, 3, 1, 6, 3, 6, 2};
    cout << uniqueFind(arr, 7) << endl;
    return 0;
}
