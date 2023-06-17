#include <iostream>
using namespace std;

void PairSum(int arr[], int size, int key)
{
    for (int i = 0; i < size; i++)
    {
        int j = i + 1;
        while (j < size)
        {
            if (arr[i] + arr[j] == key)
            {
                cout << arr[i] << " " << arr[j] << endl;
            }
            j++;
        }
    }
}

int main(int argc, char const *argv[])
{
    int size = 7;
    int key = 7;
    int arr[size] = {1, 2, 3, 4, 5, 6, 3};

    PairSum(arr, size, key);

    return 0;
}
