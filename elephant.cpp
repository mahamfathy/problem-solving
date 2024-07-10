/*An elephant decided to visit his friend.
It turned out that the elephant's house is located at point 0
and his friend's house is located at point x(x > 0) of the coordinate line.
 In one step the elephant can move 1, 2, 3, 4 or 5 positions forward. Determine, what is the minimum number of steps he need to make in order to get to his friend's house.
Input

The first line of the input contains an integer x (1 ≤ x ≤ 1 000 000) —
 The coordinate of the friend's house.*/

#include <iostream>
using namespace std;
int main()
{
    int x;
    cin >> x;
    int full_steps = x / 5;
    int steps_left = x % 5 == 0 ? 0 : 1;
    int total_steps = full_steps + steps_left;
    cout << total_steps << endl;
    return 0;
}