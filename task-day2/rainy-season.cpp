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
    string S;
    cin >> S;
    if (S == "RRR")
    {
        cout << "3" << endl;
    }
    else if (S == "RRS" || S == "RSR" || S == "SRR")
    {
        cout << "2" << endl;
    }
    else if (S == "RSS" || S == "SRS" || S == "SSR")
    {
        cout << "1" << endl;
    }
    else if (S == "SSS")
    {
        cout << "0" << endl;
    }

    // for loop //

    /*
     string s;
    cin >> s;
    int max_rainy_days = 0;
    int current_rainy_days = 0;
    for (char c : s) {
        if (c == 'R') {
            current_rainy_days++;
        } else {
            if (current_rainy_days > max_rainy_days) {
                max_rainy_days = current_rainy_days;
            }
            current_rainy_days = 0;
        }
    }
    if (current_rainy_days > max_rainy_days) {
        max_rainy_days = current_rainy_days;
    }

    cout << max_rainy_days << endl;

    */

    return 0;
}