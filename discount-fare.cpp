/*Problem Statement

There is a train going from Station A to Station B that costs X yen
(the currency of Japan).

Also, there is a bus going from Station B to Station C that costs Y yen.

Joisino got a special ticket. With this ticket, she can take the bus
for half the fare if she travels from Station A to Station B by train
and then travels from Station B to Station C by bus.

How much does it cost to travel from Station A to Station C
if she uses this ticket?
Constraints

    1≤X,Y≤1001≤X,Y≤100
    Y is an even number.
    All values in input are integers.

*/

#include <iostream>
using namespace std;
int main()
{
    int x, y;
    cin >> x;
    cin >> y;
    while (y % 2 != 0)
    {
        cout << "Please enter an even number for the bus fare: ";
        cin >> y;
    }
    int half_ticket = y / 2;
    int total_cost = x + half_ticket;
    cout << total_cost << endl;
    return 0;
}