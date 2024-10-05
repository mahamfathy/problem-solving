#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
string removeDecimal(string num, int i)
{
    if (i >= num.size())
        return num;
    if (num[i] == '.')

        return num.substr(0, i);

    return removeDecimal(num, i + 1);
}
int main()
{
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    string num;
    cin >> num;
    cout << removeDecimal(num, 0) << endl;
    return 0;
}