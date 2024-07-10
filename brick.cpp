/*
Problem Statement

We have a truck, which can carry at most N kilograms.

We will load bricks onto this truck, each of which weighs W kilograms.
At most how many bricks can be loaded?
Constraints

    1≤N,W≤10001≤N,W≤1000
    NN and WW are integers.

*/

#include <iostream>
using namespace std;
int main()
{
    int n, w;
    cin >> n >> w;
    cout << n / w << endl;
    return 0;
}