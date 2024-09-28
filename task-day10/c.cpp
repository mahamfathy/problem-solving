// #include <bits/stdc++.h>
// using namespace std;
// #define endl '\n'

// int main()
// {
//     ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
//     int t;
//     cin >> t;
//     while (t--)
//     {
//     map<char, int> mp;
//         string s1, s2;
//         cin >> s1 >> s2;
//         for (char ch : s1)
//         {
//             mp[ch]++;
//         }
//          bool found = false;
//         for (char ch : s2)
//         {
//             if (mp.find(ch) != mp.end())
//             {
//                 found = true;
//                 break;
//             }
//         }
//         cout << (found ? "YES" : "NO") << endl;
//     }
//     return 0;
// }
// we can use set

#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        string s1, s2;
        cin >> s1 >> s2;
        set<char> st(s1.begin(), s1.end());
        bool found = false;
        for (char ch : s2)
        {
            if (st.find(ch) != st.end())
            {
                found = true;
                break;
            }
        }
        cout << (found ? "YES" : "NO") << endl;
    }
    return 0;
}