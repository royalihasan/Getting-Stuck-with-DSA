#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int x = 12;
    int *grabage = 0;
    // How to sore address of Variables
    int *ref = &x;
    cout << "Address of X : " << &x << endl;
    cout << "Address of X using Pointer Variables " << ++*ref << endl;
    cout << "Address of Pointer :" << &ref << endl;
    cout << "Sizeof of Pointer " << sizeof(ref) << endl;
    cout << "Garbage Pointer is bad practice in programm :" << grabage << endl;
    int data = 111;
    int *next = NULL;
    next = &data;
    cout << "Address of data var is :" << next << " and value is " << *next << endl;
    // Pointer Arithmatic
    cout << "next :" << next << endl;
    next++;
    cout << "next++ :" << next << endl;

    return 0;
}
