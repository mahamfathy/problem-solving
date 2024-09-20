#include <bits/stdc++.h>
using namespace std;
#define endl '\n';
int main()
{
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    int n, d;
    cin >> n >> d;
    queue<int> q;
    while (n--)
    {
        int x;
        cin >> x;
        q.push(x);
    }
    while (d--)
    {
        q.push(q.front());
        q.pop();
    }
    while (!q.empty())
    {
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl;
    return 0;
}