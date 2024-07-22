#include <iostream>
using namespace std;
int main()
{
    for (int i = 0; i < 6; i++)
    {
        cout << i << endl;
    }
    int nums[] = {100, 200, 300, 400, 500};
    for (int index = 0; index < size(nums); index++)
    {
        cout << nums[index] << endl;
    }

    int numbers[] = {100, 200, 300, 400, 500, 600};
    int numsCount = sizeof(numbers) / sizeof(numbers[0]);
    int index = 2;
    // for (; index < numsCount;)
    for (;;)

    {
        cout << numbers[index] << endl;
        index++;
        if (index == 5)
        {
            break;
        }
    }
    return 0;
}