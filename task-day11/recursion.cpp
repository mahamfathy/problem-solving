#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
int power(base : int, power : int)
{
    if (power == 0)
        return 1;
    if (power == 1)
        return base;
    return base * power(base, power - 1);
}
int main()
{
    int n, x;
    cin >> n >> x;
    power(x, n);
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    return 0;
}