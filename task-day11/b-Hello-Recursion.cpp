// #include <bits/stdc++.h>
// using namespace std;
// #define endl '\n'
// int sum(vector<int> v, int i)
// {
// if (i == 0)
//     return v[i];
// else
//     return v[i] + sum(v, i - 1);
// }

// int main()
// {
//     ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
//     int t;
//     cin >> t;
//     for (int N = 1; N <= t; N++)
//     {
//         int n;
//         cin >> n;
//         vector<int> v(n);
//         for (int i = 0; i < n; i++)
//             cin >> v[i];
//         cout << "Case " << N << ": " << sum(v, n - 1) << endl;
//     }
//     return 0;
// }

// another way
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
int sum(vector<int> v, int i)
{
    if (i == (int)v.size())
        return 0;
    else
        return v[i] + sum(v, i + 1);
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    int t;
    cin >> t;
    for (int N = 1; N <= t; N++)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];
        cout << "Case " << N << ": " << sum(v, 0) << endl;
    }
    return 0;
}