/*allen has a LOT of money. He has n dollars in the bank.
For security reasons, he wants to withdraw it in cash
(we will not disclose the reasons here). The denominations for dollar bills
are 1, 5, 10, 20, 100

. What is the minimum number of bills Allen
could receive after withdrawing his entire balance?
Input

The first and only line of input contains a single integer n
(1≤n≤109).*/

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int n_100 = n / 100;
    int n_20 = n % 100 / 20;
    int n_10 = n % 100 % 20 / 10;
    int n_5 = n % 100 % 20 % 10 / 5;
    int n_1 = n % 100 % 20 % 10 % 5 / 1;
    cout << n_100 + n_20 + n_10 + n_5 + n_1 << endl;
    return 0;
}