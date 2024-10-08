#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
int snuke(int a, int p, int x)
{
    if ((x - a) < 1)
        return 0;
    if ((x - a) >= 1)
        return 1;
    return 1 + snuke(a, p, x + 1);
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    int n, a, p, x;
    cin >> n;
    while (n--)
        cin >> a >> p >> x;
    cout << (snuke(a, p, x) ? p : -1) << endl;
    return 0;
}