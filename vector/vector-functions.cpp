#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> nums = {10, 20, 30, 40};
    cout << nums.size() << endl;
    cout << nums.max_size() << endl;
    cout << nums.capacity() << endl;
    cout << nums.front() << endl;
    cout << nums.back() << endl;
    cout << nums.at(nums.size() - 1) << endl;
    nums.clear();
    cout << nums.size() << endl;
    if (nums.empty())
    {
        cout << "vector is empty" << endl;
    }
    else
    {
        cout << "vector is not empty" << endl;
    }

    return 0;
}