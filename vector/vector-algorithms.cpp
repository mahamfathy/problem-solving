#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> nums = {10, 20, -20, 50, -60, 0, 20, 20};
    int val = 20;
    int countNum = count(nums.begin(), nums.end(), val);
    cout << countNum << endl;
    cout << "===========" << endl;
    for (int &n : nums)
    {
        cout << n << endl;
    }
    cout << "===========" << endl;
    sort(nums.begin(), nums.end());
    for (int n : nums)
    {
        cout << n << endl;
    }
    cout << "===========" << endl;
    reverse(nums.begin(), nums.end());
    for (int n : nums)
    {
        cout << n << endl;
    }
    return 0;
}