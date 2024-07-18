#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    if (a > b)
        cout << "Takahashi" << endl;
    else if (a < b)
        cout << "Aoki" << endl;
    else
        cout << (c == 0 ? "Aoki" : "Takahashi") << endl;
    return 0;
}