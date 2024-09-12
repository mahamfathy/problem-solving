// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int n, curr = 0, ans = 0;
//     cin >> n;
//     while (n--)
//     {
//         int a, b;
//         cin >> a >> b;
//         ans = max(ans, curr);
//         curr -= a;
//         curr += b;
//     }
//     cout << ans << endl;
//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    int arr[n], a[n], b[n];
    for (int i = 0; i < n; i++)
        cin >> a[i] >> b[i];
    arr[0] = b[0];
    int ans = arr[0];
     for (int i = 1; i < n; i++)
    {
        arr[i] = (arr[i] - a[i]) + b[i];
        ans = max(ans, arr[i]);
    }
    cout << ans << endl;
    return 0;
}