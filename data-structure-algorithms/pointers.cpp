#include <iostream>

using namespace std;

int main()
{
    int a = 10;
    int *p;
    p = &a;
    cout << &a << endl;
    cout << p << endl;
    cout << *p << endl;
    cout << a << endl;
    cout << &p << endl;
    cout << sizeof(p) << endl;
    cout << sizeof(a) << endl;
    *p = 20;
    cout << a << endl;
    a = 30;
    cout << *p << endl;
    return 0;
}