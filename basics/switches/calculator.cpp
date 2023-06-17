#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int n1;
    int n2;
    char op;
    char fun;
    cout << "------ Eter ' S '  start  or ' E ' for exit the  Calculator ------" << endl;
    cin >> fun;
    if (fun == 'S')
    {
        cout << "Enter 1st Number: ";
        cin >> n1;
        cout << "Enter 2st Number: ";
        cin >> n2;
        cout << "Enter the Operator: ";
        cin >> op;
    }
    else
    {
        cout << "Invalid Input try 'S' or 'E' ";
    }
    
    return 0;
}
