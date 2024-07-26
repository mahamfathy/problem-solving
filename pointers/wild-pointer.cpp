#include <iostream>
using namespace std;

int main()
{
    int *ptr1;
    int *ptr2 = NULL;
    int *ptr3 = nullptr;
    cout << ptr1 << endl; // garbage value
    cout << ptr2 << endl;
    cout << ptr3 << endl;

    int a = 100;
    void *ptr = &a;
    cout << ptr << endl;
    // cout << *ptr << endl;
    // C-style //
    cout << *(int *)ptr << endl;
    // modern c++ //
    cout << *static_cast<int *>(ptr) << endl;
    return 0;
}