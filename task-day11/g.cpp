#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
bool hardToRead(string s, int i)
{
    if (i == (int)s.size())
        return true;
    if (i % 2 == 0)
    {
        if (!isupper(s[i]))
            return false;
    }
    else
    {
        if (!islower(s[i]))
            return false;
    }
    return hardToRead(s, i + 1);
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    string s;
    cin >> s;
    cout << (hardToRead(s, 0) ? "Yes" : "No") << endl;
    return 0;
}