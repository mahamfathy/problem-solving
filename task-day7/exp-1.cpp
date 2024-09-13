#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n][n], ar[n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
            if (i == j)
                ar[i] = arr[i][j];
        }
    }
    sort(ar, ar + n);
    for (int i = 0; i < n; i++)
        cout << ar[i] << " ";

    return 0;
}