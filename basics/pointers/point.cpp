#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int var = 1;
    int *p;
    p = &var; // address of var
    cout << "Address of Var:"
         << " " << p << "Value:" << *p << endl;
    // Dereference
    *p = 12;
    cout << "Dereferencing"
         << " " << *p;
    return 0;
}
