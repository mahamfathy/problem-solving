#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
int sum(string s)
{
    int res = 0;
    for (auto i : s)
        res += (i - '0');
    // res += stoi(i);
    return res;
}
int super_digit(string s)
{
    if (s.size() == 1)
        // return sum(s);
        return stoi(s);
    return super_digit(to_string(sum(s)));
}
int main()
{
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    string n;
    int k;
    cin >> n >> k;
    int ans = super_digit(n) * k;
    cout << super_digit(to_string(ans)) << endl;
    return 0;
}