#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> nums = {10, 20, 30, 40};
    vector<int>::iterator it = nums.begin();
    auto ite = nums.begin() + 1;
    // cout << it << endl;
    cout << *it << endl;
    // cout << ite << endl;
    cout << *ite << endl;
    cout << *nums.begin() << endl;
    nums.erase(nums.begin(), nums.begin() + 3);
    cout << *nums.begin() << endl;
    return 0;
}
