#include <iostream>
using namespace std;

int findDuplicates(int arr[], int len)
{
    int c = 0;
    int ans = 0;
    int num = 0;
    while (c <= len - 1)
    {
        ans = ans ^ arr[c];

        c++;
    }
    for (int i = 1; i < len; i++)
    {
        ans = ans ^ i;
    }

    return ans;
}

int main(int argc, char const *argv[])
{
    int arr[7] = {1, 2, 3, 4, 5, 6, 1};
    cout << findDuplicates(arr, 7) << endl;
    return 0;
}
