#include <iostream>
using namespace std;
int main()
{
    char x = 'a';
    cout << x << endl;
    cout << sizeof(x) << endl;
    cout << "\n";
    auto y = 'b';
    cout << y << endl;
    cout << sizeof(y) << endl;
    cout << "\n";
    auto z = "c"; // array of char
    cout << z << endl;
    cout << sizeof(z) << endl;
    cout << "\n";
    return 0;
}