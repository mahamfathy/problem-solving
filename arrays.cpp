#include <iostream>
using namespace std;

int main()
{
    int nums[4] = {1, 2, 3, 4};
    cout << nums[2] << endl;
    cout << sizeof(nums) << endl;
    cout << &nums[0] << endl;
    cout << &nums[3] << endl;

    double rans[] = {1.1, 2.2, 3.3, 4.4};
    cout << rans[2] << endl;
    float frans[]{1.1f, 2.2f, 3.3, 4.4};
    cout << frans[2] << endl;

    int all[3];
    cout << all[0] << " " << all[2] << " " << all[5] << endl;
    cout << endl;
    //    Two Dimensional Array  //
    int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    cout << arr[2][2] << endl;
    const int rows = 3;
    int cols = 3;
    int arr2[rows][cols] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    cout << arr2[0][2] << endl;
    return 0;
}