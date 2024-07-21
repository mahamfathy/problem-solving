#include <iostream>
using namespace std;
int main()
{
    // string s;
    // cin >> s;
    // cout << s.size() << endl;
    char name_a[] = {'E', 'l', 'z', 'e', 'r', 'o', '\0'};
    cout << name_a << endl;
    cout << sizeof(name_a) << endl;
    char name_b[] = "Elzero";
    cout << name_b << endl
         << sizeof(name_b) << endl;
    cout << name_b[0] << endl;
    cout << name_b[1] << endl;
    cout << name_b[2] << endl;
    cout << name_b[3] << endl;
    cout << name_b[4] << endl;
    cout << name_b[5] << endl;
    // cout << name_b[6] << endl; // error
    cout << int(name_b[6]) << endl;
    string name_c = "Elzero";
    cout << name_c << endl;
    cout << sizeof(name_c) << endl;
    const char *name_d = "Elzero";
    cout << name_d << endl;
    cout << sizeof(name_d) << endl;
    return 0;
}