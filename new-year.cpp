/*Problem Statement

How many hours do we have until New Year at MM o'clock (24-hour notation) on 3030th, December?
Constraints

    1≤M≤231≤M≤23
    MM is an integer.

*/

#include <iostream>
using namespace std;
int main()
{
    int m;
    cin >> m;
    int remaining_hours = 24 - m;
    int total_hours = remaining_hours + 24;
    cout << total_hours << endl;
    return 0;
}