#include <bits/stdc++.h>
using namespace std;
#define endl '\n';
int main()
{
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    string w;
    cin >> w;
    stack<char> s;
    for (auto c : w)
    {
        if (!s.empty() && ((c == '-' && s.top() == '+') || (c == '+' && s.top() == '-')))
            s.pop();
        else
            s.push(c);
    }
    cout << (s.empty() ? "Yes" : "No") << endl;
    return 0;
}