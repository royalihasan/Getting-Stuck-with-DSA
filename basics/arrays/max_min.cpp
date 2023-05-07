#include <iostream>
using namespace std;

int max(int arr[], int size)
{
    int c = 0;
    int max = INT32_MIN;
    while (c < size)
    {
        if (arr[c] > max)
            max = arr[c];
        c++;
    }
    return max;
}
int min(int arr[], int size)
{
    int c = 0;
    int min = INT32_MAX;
    while (c < size)
    {
        if (arr[c] < min)
            min = arr[c];
        c++;
    }
    return min;
}
int main()
{
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = sizeof(arr) / sizeof(int);
    cout << "Max num is :" << max(arr, size) << endl;
    cout << "Min num is :" << min(arr, size) << endl;

    return 0;
}
