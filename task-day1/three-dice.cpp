/*Problem Statement

Takahashi has rolled three dice. They are showing numbers a, b, and c on
the top faces.

Find the sum of the numbers on the bottom faces.

Here, each of these dice is a standard cubic die,
where the sum of the numbers on opposite faces is 7.
Constrains

    1≤a,b,c≤61≤a,b,c≤6
    All values in input are integers.

*/

#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    a = 7 - a;
    b = 7 - b;
    c = 7 - c;
    int sum = a + b + c;
    cout << sum << endl;
    return 0;
}