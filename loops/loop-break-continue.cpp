#include <iostream>
using namespace std;
int main()
{
    int nums[] = {10, 20, 30, 40, 20, 50};
    int numsSize = sizeof(nums) / sizeof(nums[0]);
    for (int i = 0; i < numsSize; i++)
    {

        // if (nums[i] == 20)
        // {
        //     continue;
        // }
        // cout << nums[i] << endl;

        //    if (nums[i] == 20)
        // {
        //     break;
        // }
        // cout << nums[i] << endl;

        // or
        cout << nums[i] << endl;

        if (nums[i] == 10)
        {
            break;
        }
    }
    return 0;
}