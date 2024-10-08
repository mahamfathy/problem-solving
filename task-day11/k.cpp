#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
int days(int n, int i = 1, int sum = 0)
{
    if (sum >= n)
        return 0;
    else
    {
        return 1 + days(n, i + 1, sum + i);
    }
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    int n;
    cin >> n;
    cout << days(n) << endl;
    return 0;
}