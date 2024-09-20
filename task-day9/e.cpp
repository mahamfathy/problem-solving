#include <bits/stdc++.h>
using namespace std;
#define endl '\n';
int main()
{
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    int n, m;
    cin >> n >> m;
    queue<pair<int, int>> q;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        q.push({i, x});
    }
    int lastChildIndex = 0;
    while (!q.empty())
    {
        auto curr = q.front();
        q.pop();
        curr.second -= m;
        if (curr.second > 0)
            q.push(curr);
        else
            lastChildIndex = curr.first;
    }
    cout << lastChildIndex + 1 << endl;
    return 0;
}