#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> prog, math, pe;
    for (int i = 1; i <= n; ++i)
    {
        int skill;
        cin >> skill;
        if (skill == 1)
            prog.push_back(i);
        else if (skill == 2)
            math.push_back(i);
        else if (skill == 3)
            pe.push_back(i);
    }

    int team = min({prog.size(), math.size(), pe.size()});
    cout << team << endl;
    for (int i = 0; i < team; ++i)
        cout << prog[i] << " " << math[i] << " " << pe[i] << endl;
    return 0;
}