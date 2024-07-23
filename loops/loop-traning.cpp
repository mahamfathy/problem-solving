#include <iostream>
using namespace std;

int main()
{
    // // 1- count even and positive numbers in an array //

    // int nums[] = {10, 20, -20, 13, 30, -30, 40};
    // int result = 0;
    // // int numsSize = sizeof(nums) / sizeof(nums[0]); // or
    // int numsSize = size(nums);
    // for (int i = 0; i < numsSize; i++)
    // {
    //     if (nums[i] % 2 == 0 && nums[i] > 0)
    //     {
    //         result += nums[i];
    //     }
    // }
    // cout << "result is: " << result << endl;

    // // 2- guess the number //
    // int guessNumber = 7;
    // int guessTries = 0;
    // cout << "guess the number from 1 to 10: " << endl;
    // int number;

    // // while (guessTries < 3 && number != guessNumber)
    // // {
    // //     cin >> number;

    // //     guessTries++;
    // //     if (number == guessNumber)
    // //     {
    // //         cout << "you win" << endl;
    // //         continue;
    // //     }

    // //     cout << "try again: " << endl;
    // // }

    // // or //

    // while (true)
    // {
    //     cin >> number;
    //     if (number == guessNumber)
    //     {
    //         cout << "you win" << endl;
    //         break;
    //     }
    //     else
    //     {
    //         cout << "try again: " << endl;
    //         guessTries++;
    //     }
    //     if (guessTries == 3)
    //     {
    //         cout << "sorry, you lose" << endl;

    //         break;
    //     }
    // }

    // 3- reversed elements from user //

    int vals[5];
    int input;
    cout << "enter 5 numbers: " << endl;
    int valSize = size(vals);
    for (int i = 0; i < valSize; i++)
    {
        cin >> input;
        vals[i] = input;
    }
    cout << "================\n";
    for (int i = valSize - 1; i >= 0; i--)
    {
        cout << vals[i] << endl;
    }
    // or i can do the in for input above

    return 0;
}