#include <iostream>
using namespace std;

int findDuplicates(int arr[], int size)
{
    int ans = 0;
    int i = 0;
    int N = size - 1;
    while (i <= N)
    {
        ans = ans ^ arr[i];
        i++;
    }
    return ans;
}

int main(int argc, char const *argv[])
{
    int size = 7;
    int arr[size] = {1, 2, 3, 4, 5, 6, 5};
    cout << findDuplicates(arr, size) << endl;

    return 0;
}
