#include <iostream>
#include <limits.h>
using namespace std;
int main()
{
    int age = 300;
    cout << age << endl;
    cout << sizeof(age) << endl; // 4 bytes
    cout << "\n";
    short int new_age = 300;
    cout << new_age << endl;
    cout << sizeof(new_age) << endl; // 2 bytes
    cout << "\n";
    long int old_age = 300;
    cout << old_age << endl;
    cout << sizeof(old_age) << endl; // 8 bytes
    cout << "\n";
    long long int very_old_age = 300;
    cout << very_old_age << endl;
    cout << sizeof(very_old_age) << endl; // 8 bytes
    cout << "\n";
    short a = 300; // we can remove int word
    cout << a << endl;
    cout << sizeof(a) << endl; // 2 bytes
    cout << "\n";
    cout << sizeof(int) << endl;
    cout << sizeof(short int) << endl;
    cout << sizeof(short) << endl;
    cout << sizeof(long) << endl;
    cout << sizeof(long int) << endl;
    cout << sizeof(long long int) << endl;
    cout << sizeof(long long) << endl;

    cout << "\n";
    cout << sizeof(signed int) << endl; // accept + - 0 values
    cout << sizeof(signed) << endl;
    cout << sizeof(unsigned int) << endl; // accept + values
    cout << sizeof(unsigned) << endl;
    unsigned int unsigned_num = -300;
    cout << unsigned_num << endl; // error
    return 0;
}