// Problem Statement //

/* We have removed A balls from a box that contained N balls
and then put B new balls into that box.
How many balls does the box contain now?

 Constraints

     All values in input are integers.
     100≤N≤200100≤N≤200
     1≤A,B≤1001≤A,B≤100
*/

#include <iostream>
using namespace std;
int main()
{
    int n, a, b;
    cin >> n >> a >> b;
    cout << n - a + b << endl;
    return 0;
}