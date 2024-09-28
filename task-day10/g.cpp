#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    int n;
    cin >> n;
    vector<string> v;
    while (n--)
    {
        string s;
        cin >> s;
        v.push_back(s);
    }
    set<string> st;
    vector<string> uniqueChats;

    for (int i = v.size() - 1; i >= 0; --i)
    {
        if (st.find(v[i]) == st.end())
        {
            uniqueChats.push_back(v[i]);
            st.insert(v[i]);
        }
    }
    for (int i = 0; i < uniqueChats.size(); ++i)
    {
        cout << uniqueChats[i] << endl;
    }
    return 0;
}