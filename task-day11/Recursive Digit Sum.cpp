#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
int super_digit(int n, int k)
{
    if (n < 10)
    {
        return n;
    }
    int sum = 0;
    while (n)
    {
        sum += n % 10;
        n /= 10;
    }
    sum *= k;
    return super_digit(sum, 1);
}
int main()
{
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    int n, k;
    cin >> n >> k;
    cout << super_digit(n, k);
    return 0;
}