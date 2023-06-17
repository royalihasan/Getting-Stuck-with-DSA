#include <iostream>
using namespace std;

void Intersection(int arr1[], int arr2[], int n, int m)
{
    int i = 0, j = 0;
    while (i < n && j < m)
    {
        if (arr1[i] == arr2[j])
        {
            cout << arr1[i] << " ";
            i++;
            j++;
        }
        else if (arr1[i] < arr2[j])
            i++;
        else
            j++;
    }
}

int main(int argc, char const *argv[])
{
    int n = 7;
    int m = 3;
    int arr1[n] = {1, 2, 3, 4, 7, 6, 0};
    int arr2[m] = {1, 2, 3};

    Intersection(arr1, arr2, n, m);

    return 0;
}
