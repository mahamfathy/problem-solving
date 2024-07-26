#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> nums = {10, 20, 30, 40};
    vector<int>::iterator it;
    // loop with iterator //
    for (it = nums.begin(); it != nums.end(); ++it)
    // for (it = nums.begin(); it < nums.end(); it++)

    {
        cout << *it << endl;
    }

    cout << "=====" << endl;

    // loop with ranged loop //

    for (int val : nums)
    {
        cout << val << endl;
    }
    cout << "=====" << endl;
    int numbers[] = {20, 40, 60, 80, 100};
    for (int myNum : numbers)
    {
        cout << myNum << endl;
    }
    return 0;
}