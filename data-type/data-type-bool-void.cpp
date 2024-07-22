#include <iostream>
using namespace std;

void without_value()
{
    // nothing to print
}
int main()
{
    bool a = true;
    bool b = false;
    cout << a << endl;
    cout << sizeof(a) << endl;
    cout << b << endl;
    cout << sizeof(b) << endl;

    bool num_one = 100;
    bool num_two = -100;
    bool num_three = 0;

    cout << num_one << endl;
    cout << num_two << endl;
    cout << num_three << endl;
    return 0;
}