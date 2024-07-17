#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
    int add = a + b;
    int sub = a - b;
    int mult = a * b;
    // int max_val = (add >= sub && add >= mult) ? add : (sub >= add && sub >= mult) ? sub
    //                                                                           : mult;
    // cout << max_val << endl;
    // if (add >= sub && add >= mult)
    // {
    //     cout << add << endl;
    // }
    // else if (sub >= add && sub >= mult)
    // {
    //     cout << sub << endl;
    // }
    // else
    // {
    //     cout << mult << endl;
    // }
    cout << (add >= sub && add >= mult ? add : (sub >= add && sub >= mult ? sub : mult)) << endl;
    return 0;
}