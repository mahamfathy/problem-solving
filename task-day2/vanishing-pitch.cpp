/*Takahashi and Aoki are playing baseball.
 Takahashi is the pitcher, and Aoki is the batter.
Takahashi can throw an invisible pitch.
When he throws it, the ball moves linearly at a
constant speed V m/sVm/s, and it becomes invisible
between the moment TT seconds after throwing and
the moment SS seconds after throwing (inclusive).
The ball keeps moving when it is invisible.
If the ball is not invisible at the moment the ball
is exactly D mDm away from Takahashi,
Aoki can hit the ball. Otherwise, he cannot hit it.
Can Aoki hit the ball?*/

#include <iostream>
using namespace std;

int main()
{
    int v, t, s, d;
    cin >> v >> t >> s >> d;
    double time = static_cast<double>(d) / v;
    cout << ((time > s || time < t) ? "Yes" : "No") << endl;
    return 0;
}