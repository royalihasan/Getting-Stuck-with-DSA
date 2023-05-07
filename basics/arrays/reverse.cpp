#include <iostream>
using namespace std;
void swap(int arr[])
{
}

void reverse(int arr[], int size)
{
    int start = 0;
    int end = size - 1;
    while (start <= end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        // swap(arr[start], arr[end]);zz

        start++;
        end--;
    }
}
void pritntArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = sizeof(arr) / sizeof(int);
    reverse(arr, size);
    pritntArray(arr, size);

    return 0;
}
