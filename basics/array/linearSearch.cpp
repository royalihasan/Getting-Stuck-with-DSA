#include <iostream>
using namespace std;

int LinearSearch(int arr[], int size, int key)
{
    int index = -1;
    int i = 0;
    while (i <= size - 1)
    {

        if (key == arr[i])
            index = i;
        i++;
    }
    return index;
}

int main(int argc, char const *argv[])
{
    int size = 10;
    int key = 100;
    int arr[size] = {100, 2, 3, 45, 666, 2332, 13, 0, 1, 4};

    int index = LinearSearch(arr, size, key);
    cout << "Index: " << index << endl;
    return 0;
}
