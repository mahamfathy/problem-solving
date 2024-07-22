#include <iostream>
#include <array>
using namespace std;
int main()
{
    array<int, 4> nums = {100, 200, 300, 400};
    cout << nums.front() << endl;
    cout << nums.back() << endl;
    cout << nums.at(2) << endl;
    cout << nums.empty() << endl;
    cout << nums.size() << endl;
    return 0;
}