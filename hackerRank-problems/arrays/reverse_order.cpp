#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int N;
    cin >> N;
    int arr[N];
    for (int i; i < N; i++)
    {
        int data;
        cin >> data;
        arr[i] = data;
    }
    int counter = N - 1;
    while (counter >= 0)
    {
        cout << arr[counter] << " ";

        counter--;
    }

    return 0;
}
