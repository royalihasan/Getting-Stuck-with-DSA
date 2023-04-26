#include <iostream>
#include <limits>
using namespace std;

int main()
{
    int first, second, third = INT32_MIN;
    int nums[] = {7, 12, 9, 15, 19, 32, 56, 70};
    cout << sizeof(nums) / sizeof(nums[0]) << endl;

    for (int i = 0; i < sizeof(nums) / sizeof(nums[0]); i++)
    {
        if (nums[i] > first)
        {
            third = second;
            second = first;

            first = nums[i];
        }
        else if (nums[i] > second)
        {
            third = second;
            second = nums[i];
        }
        else if (nums[i] > third)
            third = nums[i];
    }
    cout << "\nThree largest elements are: " << first << ", " << second << ", " << third;
}
