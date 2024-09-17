

#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
int main()
{
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    stack<int> st;
    int T;
    cin >> T;

    while (T--)
    {
        int query;
        cin >> query;
        if (query == 1)
        {
            int n;
            cin >> n;
            st.push(n);
        }
        else if (query == 2)
        {
            if (!st.empty())
            {
                st.pop();
            }
        }
        else if (query == 3)
        {
            if (!st.empty())
            {
                cout << st.top() << endl;
            }
            else
            {
                cout << "Empty!" << endl;
            }
        }
    }

    return 0;
}
