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
    return 0;
}