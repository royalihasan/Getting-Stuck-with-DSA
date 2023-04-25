#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int x = 12;
    // How to sore address of Variables
    int *ref = &x;
    cout << "Address of X : " << &x << endl;
    cout << "Address of X using Pointer Variables " << ++*ref << endl;
    cout << "Address of Pointer :" << &ref << endl;
    return 0;
}
