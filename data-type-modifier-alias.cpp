#include <iostream>
#include <limits.h>
using namespace std;
int main()
{
    int age = 2;
    cout << age << endl;
    cout << sizeof(age) << endl; // 4 bytes
    cout << "\n";
    short int new_age = 300;
    cout << new_age << endl;
    cout << sizeof(new_age) << endl; // 2 bytes
    return 0;
}