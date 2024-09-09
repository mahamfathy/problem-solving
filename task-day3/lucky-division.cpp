#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    bool flag = false;
    for (int i = 1; i <= n; i++)
    {
        int temp = i;
        bool isLucky = true;
        while (temp > 0)
        {
            if (temp % 10 != 4 && temp % 10 != 7)
            {
                isLucky = false;
                break;
            }
            temp /= 10;
        }

        if (isLucky && n % i == 0)
        {
            flag = true;
            break;
        }
    }
    cout << ((flag) ? "YES" : "NO") << endl;

    return 0;
}