#include <iostream>
using namespace std;

void sort01(int arr[], int size)
{

    int i = 0;
    int j = size - 1;
    while (i <= j)

    {

        if (arr[i] == 0)
            i++;
        else if (arr[j] == 1)
            j--;
        else if (arr[i] == 1 && arr[j] == 0)
            swap(arr[i], arr[j]);
    }
}

int main(int argc, char const *argv[])
{
    int size = 5;
    int arr[size] = {0, 1, 1, 0, 0};
    sort01(arr, size);

    cout << "[";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << ",";
    }
    cout << "]";

    return 0;
}
