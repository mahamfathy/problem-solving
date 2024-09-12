#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[4];
    for (int i = 0; i < 4; i++)
        cin >> arr[i];
    sort(arr, arr + 4);
    int sum = 0;
    for (int i = 0; i < 3; i++)
        sum += (arr[i] == arr[i + 1]);
    // for (int i = 1; i < 4; i++)
    // sum+=(arr[i]===arr[i-1])
    cout << sum << endl;
    return 0;
}