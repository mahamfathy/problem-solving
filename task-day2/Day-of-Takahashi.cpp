/*Problem Statement

In AtCoder Kingdom, Gregorian calendar is used, and dates are written in the "year-month-day" order, or the "month-day" order without the year.
For example, May 33, 2018 is written as 2018-5-3, or 5-3 without the year.

In this country, a date is called Takahashi when the month and the day are equal as numbers. For example, 55-55 is Takahashi.
How many days from 2018-1-1 through 2018-a-b are Takahashi?

Constraints

    aa is an integer between 1 and 12 (inclusive).
    bb is an integer between 1 and 31 (inclusive).
    2018-a-b is a valid date in Gregorian calendar.


*/
#include <iostream>
using namespace std;
int main()
{
    int a = 1 && a <= 12;
    int b = 1 && b <= 30;
    cin >> a >> b;
    // if (a == b)
    // {
    //     cout << a << endl;
    // }
    // else if (a != b && b > a)
    // {
    //     cout << a << endl;
    // }
    // else
    // {
    //     cout << a - 1 << endl;
    // }

    // or //

    cout << (a == b ? a : (a != b && b > a ? a : a - 1)) << endl;
    return 0;
}