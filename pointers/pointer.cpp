#include <iostream>
using namespace std;

int main()
{
    int nums = 100;
    int *ptr = &nums;
    cout << nums << endl;
    cout << &nums << endl;
    cout << *ptr << endl;
    cout << ptr << endl;
    cout << "============" << endl;
    *ptr = 200; // or nums =200;
    cout << nums << endl;
    cout << &nums << endl;
    cout << *ptr << endl;
    cout << ptr << endl;

    return 0;
}