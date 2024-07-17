#include <iostream>
using namespace std;

int main()
{
    int w;
    cin >> w;
    cout << (w % 2 == 0 && w > 2 ? "YES" : "NO") << endl;
    // or //
    // cout << (w % 2 == 0 || w == 2 ? "YES" : "NO") << endl;

    // or //

    // if (w % 2 == 0 && w > 2)
    //     cout << "YES" << endl;
    // else
    //     cout << "NO" << endl;
    return 0;
}