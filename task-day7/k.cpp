#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, x;
    cin >> n >> x;
    bool flag = true;
    while (n--)
    {
        int a, b;
        cin >> a >> b;
        if (a == x || b == x || 7 - a == x || 7 - b == x)
            flag = false;
    }
    cout << (flag ? "YES" : "NO") << endl;
    return 0;
}
