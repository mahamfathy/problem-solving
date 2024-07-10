/*Problem Statement

You are given a person's systolic blood pressure, AA, and diastolic blood pressure, BB.
Find the mean arterial pressure, CC, which we define as follows:

    C=A−B3+BC=3A−B​+B.

Constraints

    50≤B≤A≤30050≤B≤A≤300
    All values in input are integers.

*/

#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
    double c = (a - b) / 3.0 + b;
    cout << fixed << setprecision(6) << c << endl;
    return 0;
}