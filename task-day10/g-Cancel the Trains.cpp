// #include <bits/stdc++.h>
// using namespace std;
// #define endl '\n';
// int main()
// {
//     ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n, m;
//         cin >> n >> m;
//         set<int> s_bottom;
//         for (int i = 0; i < n; i++)
//         {
//             int train;
//             cin >> train;
//             s_bottom.insert(train);
//         }
//         int crashes = 0;

//         for (int i = 0; i < m; i++)
//         {
//             int train;
//             cin >> train;
//             if (s_bottom.find(train) != s_bottom.end())
//             {
//                 crashes++;
//             }
//         }
//         cout << crashes << endl;
//     }
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
#define endl '\n';
int main()
{
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        int res = 0;
        set<int> st;
        for (int i = 0; i < n + m; i++)
        {
            int x;
            cin >> x;
            auto it = st.insert(x);
            // if (it.second == 0)
            if (!it.second)
                res++;
        }
        cout << res << endl;
    }
    return 0;
}