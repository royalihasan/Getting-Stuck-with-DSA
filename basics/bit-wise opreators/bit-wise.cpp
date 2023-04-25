#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int x = 4;
    int y = 5;
    cout << "x and y"
         << ":" << (x & y) << endl;
    cout << "x or y"
         << ":" << (x | y) << endl;
    cout << "~x"
         << ":" << ~x << endl;
    cout << "x^y"
         << ":" << (x ^ y) << endl;

    return 0;
}
