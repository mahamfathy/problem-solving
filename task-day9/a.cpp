

#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
int main()
{
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    queue<int> q;
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        switch (n)
        {
        case 1:
            int x;
            cin >> x;
            q.push(x);
            break;
        case 2:
            if (!q.empty())
                q.pop();
            break;
        case 3:
            cout << (q.empty() ? "Empty!" : to_string(q.front())) << endl;
            // if (q.empty())
            // cout << "Empty!" << endl;
            // else
            // cout << q.front() << endl;
            break;
        }
    }
    return 0;
}
