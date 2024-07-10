/*Problem Statement

We have a drink that has AA kilocalories of energy per 100100 milliliters. How many kilocalories of energy does BB milliliters of this drink have?
Constraints

    0≤A,B≤10000≤A,B≤1000
    All values in input are integers.

*/

#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
    double energy = (b / 100.0) * a;
    cout << fixed << setprecision(6) << energy << endl;
    return 0;
}