#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    set<char> st;
    string s;
    cin >> s;
    for (char ch : s)
    {
        st.insert(ch);
    }
    cout << (st.size() % 2 == 0 ? "CHAT WITH HER!" : "IGNORE HIM!") << endl;
    return 0;
}