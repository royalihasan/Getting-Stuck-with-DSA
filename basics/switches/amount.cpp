#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int N;
    cin >> N;
    int hundreds;
    int fifties;
    int twenties;
    int tens;
    int ones;
    int figure;
    cin >> figure;

    switch (figure)
    {
    case 100:
        hundreds = N / 100;
        cout << hundreds << " hundreds" << endl;
        break;
    case 50:
        fifties = (N - hundreds * 100) / 50;
        cout << fifties;
        break;
    case 20:
        break;
    case 10:
        break;
    case 1:
        break;

    default:
        break;
    }

    return 0;
}
