#include <bits/stdc++.h>
using namespace std;
#define endl '\n';
int main()
{
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    int n;
    cin >> n;
    stack<string> s;
    string text = "";
    while (n--)
    {
        int t;
        cin >> t;

        if (t == 1)
        {
            string w;
            cin >> w;
            s.push(text);
            text += w;
        }
        else if (t == 2)
        {
            int k;
            cin >> k;
            s.push(text);
            text.erase(text.end() - k, text.end());
        }
        else if (t == 3)
        {
            int k;
            cin >> k;
            cout << text[k - 1] << endl;
        }

        else if (t == 4)
        {
            if (!s.empty())
            {
                text = s.top();
                s.pop();
            }
        }
    }
    return 0;
}