#include <iostream>
using namespace std;

int findMax(int arr[], int size)
{
    int max = INT32_MIN;
    int i = 0;
    while (i <= size - 1)
    {
        if (arr[i] >= max)
            max = arr[i];
        i++;
    }
    cout << arr << endl;
    return max;
}
int findMin(int arr[], int size)
{
    int min = INT32_MAX;
    int i = 0;
    while (i <= size - 1)
    {
        if (arr[i] <= min)
            min = arr[i];
        i++;
    }
    return min;
}

int main(int argc, char const *argv[])
{
    int size = 10;
    int arr[size] = {100, 2, 3, 45, 666, 2332, 13, 0, 1, 4};

    int max = findMax(arr, size);
    int min = findMin(arr, size);
    cout << "Miximun number is " << max << endl;
    cout << "Minimun number is " << min << endl;
    cout << arr << endl;
    return 0;
}
