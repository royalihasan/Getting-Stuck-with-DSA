#include <iostream>
#include <math.h>
using namespace std;
class Solution
{
public:
    int bitwiseComplement(int n)
    {
        int c = 0;
        int ans = 0;
        int com = 0;
        while (n != 0)
        {
            int bit = ~n & 1;
            if (bit == 1)
                ans = ans + pow(10, c);

            n = n >> 1;
            c++;
        }
        cout << com << endl;
        return ans;
    }
};
int main(int argc, char const *argv[])
{

    Solution s;
    cout << s.bitwiseComplement(10) << endl;
    return 0;
}
