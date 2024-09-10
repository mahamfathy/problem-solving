#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    cout << ((count(arr, arr + n, 1) > 0) ? -1 : 1) << endl;
    return 0;
}