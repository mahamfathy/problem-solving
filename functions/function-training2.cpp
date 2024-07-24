#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    cout << min(-10, 1) << endl;
    cout << max(10, 1) << endl;
    cout << min('a', 'c') << endl;
    cout << min('a', 'C') << endl; // its ascii value
    cout << min({10, -20, -50, 500, 0}) << endl;
    cout << "==========\n";
    int nums[] = {10, 20, -50, 500, 40};
    int numsSize = sizeof(nums) / sizeof(nums[0]);
    // int numsSize = size(nums);
    int checkMinNum = nums[0];
    for (int i = 0; i < numsSize; i++)
    {
        if (nums[i] < checkMinNum)
        {
            checkMinNum = nums[i];
        }
    }
    cout << checkMinNum << endl;
    cout << "==========\n";
    int numsTwo[] = {10, 20, 10, 50, 60, 10, 20, 10};
    int numsSizeTwo = sizeof(numsTwo) / sizeof(numsTwo[0]);
    int counter = 0;
    int choosenNum = 10;

    for (int i = 0; i < numsSizeTwo; i++)
    {
        if (numsTwo[i] == choosenNum)
        {
            counter++;
        }
    }
    cout << counter << endl;
    return 0;
}