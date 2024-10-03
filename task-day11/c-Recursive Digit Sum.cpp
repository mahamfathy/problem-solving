#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
int super_digit(string s)
{
    int sum = 0;
        for (i : s)
            sum += (i - '0');
return sum;
       
    }
}
int main()
{
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    string n;
    int k;
    cin >> s >> n;
    cout << super_digit(s) * k << endl;
    return 0;
}