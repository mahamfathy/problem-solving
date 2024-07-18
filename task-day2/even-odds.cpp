#include <iostream>

using namespace std;

int main()
{
    long long n, k;
    cin >> n >> k;

    // Calculate the count of odd numbers
    long long count_of_odd = (n + 1) / 2;

    if (k <= count_of_odd)
    {
        // k-th number is in the odd part
        cout << 2 * k - 1 << endl;
    }
    else
    {
        // k-th number is in the even part
        cout << 2 * (k - count_of_odd) << endl;
    }

    return 0;
}
