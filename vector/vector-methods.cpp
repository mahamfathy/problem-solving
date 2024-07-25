#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> nums = {10, 20, 30};
    // cout << nums[2] << endl;
    cout << nums.at(2) << endl;
    cout << nums.size() << endl;
    nums.pop_back();
    cout << nums.size() << endl;
    return 0;
}