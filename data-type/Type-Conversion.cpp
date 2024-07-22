#include <iostream>
using namespace std;
int main()
{
    // implicit type conversion
    int a = 20;
    double b = 20.5;
    cout << a + b << endl;
    cout << sizeof(a + b) << endl; // 8byte
    // explicit type conversion
    int c = 20;
    double d = 20.5;
    cout << c + (int)d << endl;
    cout << sizeof(c + (int)d) << endl; // 4byte
    // or function lite way
    int x = 20;
    double y = 20.5;
    cout << x + int(y) << endl;
    cout << sizeof(x + int(y)) << endl; // 4byte
    return 0;
}
