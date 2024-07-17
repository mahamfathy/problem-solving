/*

Takahashi has KK 500-yen coins. (Yen is the currency of Japan.) If these coins add up to XX yen or more, print Yes; otherwise, print No.
Constraints

    1≤K≤100
    1≤X≤10*5

*/

#include <iostream>
using namespace std;
int main()
{
    int k, x;
    cin >> k >> x;
    cout << (k * 500 >= x ? "Yes" : "No") << endl;
    return 0;
}