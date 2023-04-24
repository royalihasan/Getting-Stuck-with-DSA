#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    cout << sizeof(int);

    int a = 5;
    int *p;
    p = &a;
    cout << p << endl;
    cout << p + 1;
    return 0;
}
