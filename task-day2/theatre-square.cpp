#include <iostream>
using namespace std;
int main()
{
    double n, m, a;
    cin >> n >> m >> a;
    long long flagstones_n = (n + a - 1) / a;
    long long flagstones_m = (m + a - 1) / a;
    cout << flagstones_n * flagstones_m << endl;
    return 0;
}