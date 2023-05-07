#include <iostream>
using namespace std;
void swap(int arr[])
{
}

void swapAlternate(int arr[], int size)
{
    // {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}
    int counter = 0;
    while (counter < size - 1)
    {
        if (counter + 1 <= size - 1)
        {
            int temp = arr[counter + 1];     // 2 index 1
            arr[counter + 1] = arr[counter]; // index 1 =2
            arr[counter] = temp;
        }
        counter += 2;
    }
    cout << counter << endl;
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
    swapAlternate(arr, size);
    pritntArray(arr, size);

    return 0;
}
