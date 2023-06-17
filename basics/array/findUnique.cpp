#include <iostream>
using namespace std;

int findUnique(int arr[], int size)
{
    int ans = 0;
    int i = 0;
    while (i <= size - 1)
    {
        ans ^= arr[i]; // ans ^ ar
        i++;
    }
    return ans;
}

int main(int argc, char const *argv[])
{
    int size = 7;
    int arr[size] = {3, 4, 2, 2, 7, 3, 4};
    cout << findUnique(arr, size) << endl;

    return 0;
}
