#include <iostream>
using namespace std;
int main()
{
    double dob = 20.5;
    cout << dob << endl;
    cout << sizeof(dob) << endl;
    cout << "\n";

    float flo = 10.5; // without putting letter f it will consider it as double
    flo = 10.5f + 9.5f;
    cout << flo << endl;
    cout << sizeof(flo) << endl;
    cout << "\n";

    auto a = 10.5; // without putting letter f it will consider it as double
    auto b = 10.5f;
    cout << sizeof(a) << endl
         << sizeof(b) << endl;
    return 0;
}