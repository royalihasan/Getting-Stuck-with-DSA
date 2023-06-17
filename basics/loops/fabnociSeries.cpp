#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{

    int i = 1;
    int N;
    cin >> N;
    int a = 0;
    int b = 1;
    while (i <= N)
    {

        int nextNumber = a + b;
        cout
            << nextNumber << " ";
        a = b;
        b = nextNumber;
        i++;
    }

    return 0;
}
