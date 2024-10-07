#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
int damage(int s, int d, int x, int y)
{

    if (x < s && y > d)
        return 1;
    if (x >= s || y <= d)
        return 0;
    return damage(s, d, x + 1, y - 1);
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    int n, s, d, x, y;
    bool damage_found = false;
    cin >> n >> s >> d;
    while (n--)
    {
        cin >> x >> y;
        if (damage(s, d, x, y))
            damage_found = true;
    }
    cout << (damage_found ? "Yes" : "No") << endl;
    return 0;
}