#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> a(n);
    int lastChild = 0;
    int maxTurns = -1;
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
        int turns = (a[i] + m - 1) / m;
        if (turns >= maxTurns)
        {
            maxTurns = turns;
            lastChild = i + 1;
        }
    }
    cout << lastChild << endl;
    return 0;
}
