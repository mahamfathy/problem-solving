/*

In the Kingdom of AtCoder, there is a standardized test of competitive programming proficiency.

An examinee will get a score out of 100100 and obtain a rank according to the score, as follows:

    Novice, for a score not less than 00 but less than 4040;
    Intermediate, for a score not less than 4040 but less than 7070;
    Advanced, for a score not less than 7070 but less than 9090;
    Expert, for a score not less than 9090.

Takahashi took this test and got XX points.

Find the minimum number of extra points needed to go up one rank higher. If, however, his rank was Expert, print expert, as there is no higher rank than that.
*/
#include <iostream>
using namespace std;
int main()
{
    int x;
    cin >> x;
    if (x <= 100 && x >= 90)
    {
        cout << "expert" << endl;
    }
    else if (x >= 70)
    {
        cout << 90 - x << endl;
    }
    else if (x >= 40)
    {
        cout << 70 - x << endl;
    }
    else
    {
        cout << 40 - x << endl;
    }
    return 0;
}