#include <iostream>
using namespace std;

bool isEnvenOdd(int n)
{
    if (n & 1)
        return false;
    else
        return true;
}

int main(int argc, char const *argv[])
{

    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    for (int i = 0; i < 10; i++)
    {
        if (isEnvenOdd(arr[i]))
            cout << arr[i] << " is Even" << endl;
        else
            cout << arr[i] << " is Odd" << endl;
    }

    return 0;
}
