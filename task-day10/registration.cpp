#include <bits/stdc++.h>
using namespace std;
#define endl '\n';
int main()
{
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    int n;
    cin >> n;
    map<string, int> data;
    while (n--)
    {
        string name;
        cin >> name;
        if (data.find(name) == data.end())
        {
            cout << "OK" << endl;
            data[name] = 0;
        }
        else
            cout << name << data[name] << endl;

        data[name]++;
    }

    return 0;
}