#include <iostream>
using namespace std;
int main()
{
    int nums[6] = {100, 200, 300, 400, 500, 600};
    int numsSize = sizeof(nums) / sizeof(nums[0]);
    for (int i = 0; i < numsSize; i += 2)
    {
        cout << nums[i] << endl;
    }
    for (int i = 0; i < numsSize; i++)
    {
        cout << nums[i] << endl;
        i++;
    }
    cout << endl;
    for (int i = (numsSize - 1);;)
    // for (int i = (numsSize - 1); i >=2; i--)

    {
        cout << nums[i] << endl;
        i--;

        if (i < 2)
        {
            break;
        }
    }

    return 0;
}