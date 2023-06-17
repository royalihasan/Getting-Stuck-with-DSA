#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int N;
    char ch;
    cin >> N;
    cin >> ch;
    switch (N) // Expression
    {
        //
    case 1:
        cout << "1";
        break;
    case 2:
        cout << "2";
        break;
    case 3:
        switch (ch)
        {
        case 'A':
            cout << "A" << endl;
            break;

        default:
            break;
        }
        cout << "3" << endl;
        break;

    default:
        cout << "N";
        break;
    }
    return 0;
}
