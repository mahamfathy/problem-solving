#include <iostream>
using namespace std;

int main()
{
    int nums[] = {10, 20, 30, 40, 50};
    cout << nums << endl;
    cout << &nums << endl;
    cout << nums[0] << endl;
    cout << *nums << endl;
    cout << nums[1] << endl;
    cout << *(nums + 1) << endl;
    cout << &nums + 1 << endl;
    cout << &nums + 2 << endl;
    int *ptr = nums;
    cout << ptr << endl;
    cout << *ptr << endl;
    ptr++;
    cout << ptr << endl;
    cout << *ptr << endl;
    ptr += 2;
    cout << ptr << endl;
    cout << *ptr << endl;
    return 0;
}