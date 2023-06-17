#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int a = 1;
    int b = a++;
    int c = ++a;
    cout << b << endl;
    cout << c << endl;
    return 0;
}
 