#include <iostream>
using namespace std;

void swapAlternate(int arr[], int size)
{
    int i = 1;
    int N = size - 2;
    while (i <= N) // 8
    {

        if (arr[i - 1] < arr[i] && arr[i] > arr[i + 1])
            cout << arr[i] << " ";
        i++;
    }
}

int main(int argc, char const *argv[])
{
    int size = 10;
    int arr[size] = {100, 101, 3, 45, 666, 2332, 13, 0, 3, 2};
    swapAlternate(arr, size);

    return 0;
}
