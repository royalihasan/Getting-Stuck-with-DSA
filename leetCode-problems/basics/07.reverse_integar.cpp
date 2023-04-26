#include <iostream>
#include <math.h>
#include <limits.h>
using namespace std;
class Solution
{
public:
    int reverse(int x)
    {
        int reverse_number = 0;
        while (x = !0)
        {
            int digit = x % 10;
            if (reverse_number > INT_MAX / 10 || reverse_number < INT_MIN)
                return 0;
            reverse_number = reverse_number * 10 + digit;

            x = x / 10;
        }

        return reverse_number;
    }
};
int main(int argc, char const *argv[])
{

    Solution s;
    cout << s.reverse(-123);

    return 0;
}
