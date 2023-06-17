#include <iostream>
using namespace std;

void reverse(int arr[], int size)
{

    int start = 0;
    int end = size - 1;
    while (start <= end)
    {
        int temp = arr[end];
        arr[end] = arr[start];
        arr[start] = temp;
        start++;
        end--;
    }
}

int main(int argc, char const *argv[])
{
    int size = 10;
    int arr[size] = {100, 2, 3, 45, 666, 2332, 13, 0, 1, 4};
    reverse(arr, size);

    cout << "[";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << ",";
    }
    cout << "]";

    return 0;
}
