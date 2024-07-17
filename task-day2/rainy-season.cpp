/*


We have weather records at AtCoder Town for some consecutive three days. A string of length 33, SS, represents the records - if the ii-th character is S, it means it was sunny on the ii-th day; if that character is R, it means it was rainy on that day.

Find the maximum number of consecutive rainy days in this period.
Constraints

    ∣S∣=3∣S∣=3
    Each character of SS is S or R.


*/

#include <iostream>
using namespace std;
int main()
{
    string s;
    cin >> s;
    if (s == "RRR")
    {
        cout << "3" << endl;
    }
    else if (s == "RRS" || s == "RSR" || s == "SRR")
    {
        cout << "2" << endl;
    }
    else if (s == "RSS" || s == "SSR" || s == "SRS")
    {
        cout << "1" << endl;
    }
    else
    {
        cout << "0" << endl;
    };
    return 0;
}