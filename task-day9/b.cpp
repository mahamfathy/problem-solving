#include <bits/stdc++.h>
using namespace std;
#define endl '\n';
int main()
{
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    stack<int> st;
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
            st.push(x);
            break;
        case 2:
            if (!st.empty())
                st.pop();
            break;
        case 3:
            cout << (st.empty() ? "Empty!" : to_string(st.top())) << endl;
            break;
        }
    }

    return 0;
}