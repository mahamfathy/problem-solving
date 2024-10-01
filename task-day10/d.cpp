#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    string keyboard = "qwertyuiopasdfghjkl;zxcvbnm,./";
    char dir;
    string seq;
    cin >> dir >> seq;
    map<char, char> mp;
    if (dir == 'L')
    {
        for (size_t i = 1; i < keyboard.size(); i++)
        {
            mp[keyboard[i]] = keyboard[i - 1];
        }
    }
    else if (dir == 'R')
    {
        for (size_t i = 0; i < keyboard.size() - 1; i++)
        {
            mp[keyboard[i]] = keyboard[i + 1];
        }
    }
    string msg;
    for (char ch : seq)
    {
        msg += mp[ch];
    }
    cout << msg << endl;
    return 0;
}