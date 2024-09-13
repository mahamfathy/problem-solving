#include <iostream>
using namespace std;

const int N = 1005;
int arr[N];

int main()
{
    int n, k;
    cin >> n >> k;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    bool flag = false;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if ((arr[i] + arr[j]) % k == 0)
            {
                flag = true;
            }
        }
    }

    cout << ((flag) ? "YES" : "NO") << endl;
    return 0;
}
