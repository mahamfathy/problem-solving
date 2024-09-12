#include <bits/stdc++.h>
using namespace std;
const int N = 105;
int arr[N];
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    int mxPos = max_element(arr, arr + n) - arr;
    reverse(arr, arr + n);
    int temp = min_element(arr, arr + n) - arr;
    int mnPos = n - temp - 1;
    int sum = mxPos + (n - mnPos - 1);

    return 0;
}