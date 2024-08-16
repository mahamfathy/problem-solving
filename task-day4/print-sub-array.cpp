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
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int A[n];
    for (int i = 0; i < n; ++i)
    {
        cin >> A[i];
    }

    int l, r;
    cin >> l >> r;

    for (int i = l - 1; i <= r - 1; ++i)
    {
        cout << A[i] << " ";
    }
    cout << endl;

    return 0;
}