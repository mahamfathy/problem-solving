#include <iostream>
using namespace std;

int main()
{
    // 1- count even and positive numbers in an array //

    int nums[] = {10, 20, -20, 13, 30, -30, 40};
    int result = 0;
    // int numsSize = sizeof(nums) / sizeof(nums[0]); // or
    int numsSize = size(nums);
    for (int i = 0; i < numsSize; i++)
    {
        if (nums[i] % 2 == 0 && nums[i] > 0)
        {
            result += nums[i];
        }
    }
    cout << "result is: " << result << endl;

    // 2- guess the number //

    return 0;
}