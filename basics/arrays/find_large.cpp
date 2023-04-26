#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int N;
    cin >> N;
    int arr[N];
    for (int i; i < N; i++)
    {
        int data;
        cin >> data;
        arr[i] = data;
    }
    int counter = 0;
    int max = 0;
    while (counter < N)
    {
        if (max > arr[counter])
            max = max;
        else
            max = arr[counter];

        counter++;
    }
    cout << max << endl;

    return 0;
}
