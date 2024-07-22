#include <iostream>
#include <limits.h>
using namespace std;
int main()
{
    cout << "char: " << CHAR_MAX << endl;
    cout << "short: " << SHRT_MAX << endl;
    cout << "int: " << INT_MAX << endl;
    cout << "int: " << INT_MIN << endl;
    cout << "long: " << LONG_MAX << endl;
    cout << "long long: " << LONG_LONG_MAX << endl;
    cout << "\n ";
    cout << sizeof(int) << endl;
    cout << sizeof(char) << endl;
    cout << sizeof(bool) << endl;
    cout << sizeof(double) << endl;
    cout << sizeof(float) << endl;

    return 0;
}