#include <iostream>
using namespace std;

int main()
{
    int nums[] = {10, 20, 30, 40};
    int *ptr = &nums[0];
    cout << nums[0] << endl;
    cout << &nums[0] << endl;
    cout << *ptr << endl;
    cout << ptr << endl;
    cout << "============" << endl;

    cout << nums[1] << endl;
    cout << &nums[1] << endl;
    cout << *(ptr + 1) << endl;
    cout << ptr + 1 << endl;

    return 0;
}