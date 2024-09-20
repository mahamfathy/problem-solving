#include <bits/stdc++.h>
using namespace std;
#define endl '\n';
bool checkParanthesis(string exmp)
{
    stack<char> s;
    for (char c : exmp)
    {
        if (c == '(' || c == '{' || c == '[')
        {
            s.push(c);
        }
        else if (c == ')' && !s.empty() && s.top() == '(')
        {
            s.pop();
        }
        else if (c == '}' && !s.empty() && s.top() == '{')
        {
            s.pop();
        }
        else if (c == ']' && !s.empty() && s.top() == '[')
        {
            s.pop();
        }
        else
        {
            return false;
        }
    }
    return s.empty();
}
int main()
{
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    int n;
    cin >> n;
    cin.ignore();
    while (n--)
    {
        string exp;
        getline(cin, exp);
        cout << (checkParanthesis(exp) ? "YES" : "N") << endl;
    }
    return 0;
}
