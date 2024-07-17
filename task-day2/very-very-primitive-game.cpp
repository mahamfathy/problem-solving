#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    if ((a + b) % 2 == 0)
    {
        if (c == 0)
        {
            cout << "Aoki" << endl;
        }
        else
        {
            cout << "Takahashi" << endl;
        }
    }
    else
    {
        if (c == 1)
        {
            cout << "Aoki" << endl;
        }
        else
        {
            cout << "Takahashi" << endl;
        }
    }

    return 0;
}