#include <bits/stdc++.h>
using namespace std;

// int main()
// {
//     int n;
//     cin >> n;
//     int arr[n];
//     for (int i = 0; i < n; i++)
//         cin >> arr[i];
//     cout << ((count(arr, arr + n, 1) > 0) ? -1 : 1) << endl;
//     return 0;
// }

int main()
{
    int n;
    cin >> n;
    int arr[n];
    int mn = 2;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        mn = min(mn, arr[i]);
    }
    cout << (mn == 1 ? -1 : 1) << '\n';
    return 0;
}