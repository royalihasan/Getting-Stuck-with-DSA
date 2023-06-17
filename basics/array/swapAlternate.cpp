#include <iostream>
using namespace std;

void swapAlternate(int arr[], int size)
{

    int i = 0;

    while (i <= size - 1)
    {
        int j = i + 1;
        if (i + 1 < size) // BASE condition
        {
            int temp = arr[j];
            arr[j] = arr[i];
            arr[i] = temp;
        }

        i += 2;
    }
}

int main(int argc, char const *argv[])
{
    int size = 10;
    int arr[size] = {100, 2, 3, 45, 666, 2332, 13, 0, 1, 2};
    swapAlternate(arr, size);

    cout << "[";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << ",";
    }
    cout << "]";

    return 0;
}
