#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<char> k(n);
        for (int i = 0; i < n; i++)
        {
            cin >> k[i];
        }
        int min = 0;
        for (int i = 0; i < k.size(); i++)
        {
            if (k[i] == 'A')
            {
                k[i + 1] = 'A';
            }
            min++;
        }
        cout << min << endl;
    }
    return 0;
}