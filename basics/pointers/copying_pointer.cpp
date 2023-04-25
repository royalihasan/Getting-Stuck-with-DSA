#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int n = 5;
    int a = n;
    cout << "The Value of a is :" << a << endl;
    // Increment the a by 1
    a++;
    cout << "The value of a++ is :" << a << endl;
    int *ptr1 = NULL;
    ptr1 = &n;
    cout << "The Value of n is :" << n << endl;
    (*ptr1)++;
    cout << "The Value of n increment by 1 using pointer :" << *ptr1 << endl;
    cout << "The Value of n is :" << n << endl;
    // Copy the pointer in another pointer
    int *ptr2 = ptr1;

    cout << "The Reference in pointer1 is :" << ptr1 << endl;
    cout << "The Reference in pointer2 is :" << ptr2 << endl;

    // Value
    cout << "The Value in pointer1 is :" << *ptr1 << endl;
    cout << "The Value in pointer2 is :" << *ptr2 << endl;
}
