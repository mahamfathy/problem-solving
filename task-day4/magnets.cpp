#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string prev, current;
    int groups = 0;
    cin >> prev;
    groups = 1;
    for (int i = 1; i < n; ++i)
    {
        cin >> current;
        if (current != prev)
        {
            ++groups;
        }
        prev = current;
    }

    cout << groups << endl;

    return 0;
}
