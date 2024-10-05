#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

long long sum(const vector<int> x, const vector<int> y, int i, int N)
{
    if (i == N)
        return 0;
    return (long long)x[i] * y[i] + sum(x, y, i + 1, N);
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    int n;
    cin >> n;
    vector<int> a(n), b(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    long long res = sum(a, b, 0, n);
    cout << (res == 0 ? "Yes" : "No") << endl;
    return 0;
}