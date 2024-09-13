#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    // int sum = 0;
    // for (int i = n; i >= 0; i--) this is o(n)
    // for (int i = 0; i <= n; i++)
    //     sum += i;
    // cout << sum << endl;
    cout << n * (n + 1) / 2 << endl; // o(1)
    return 0;
}