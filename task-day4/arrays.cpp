

// #include <iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cin >> n;
//     int arr[n];
//     double sum = 0;
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//         sum += arr[i];
//     }
//     double average = sum / n;
//     cout << average << endl;

//     return 0;
// }
// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cin >> n;

//     int A[n];
//     for (int i = 0; i < n; ++i) {
//         cin >> A[i];
//     }

//     int l, r;
//     cin >> l >> r;

//     for (int i = l - 1; i <= r - 1; ++i) {
//         cout << A[i] << " ";
//     }
//     cout << endl;

//     return 0;
// }
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n][n];
    for (int i = 0; i < n; ++i)
    {
        a[0][i] = 1;
        a[i][0] = 1;
    }
    for (int i = 1; i < n; ++i)
    {
        for (int j = 1; j < n; ++j)
        {
            a[i][j] = a[i - 1][j] + a[i][j - 1];
        }
    }

    cout << a[n - 1][n - 1] << endl;

    return 0;
}
