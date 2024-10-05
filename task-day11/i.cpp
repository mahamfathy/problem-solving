
// runtime error
//  #include <bits/stdc++.h>
//  using namespace std;
//  #define endl '\n'
//  vector<int> removeNumber(vector<int> v, int i, int x)
//  {
//      if (i == v.size())
//          return v;
//      if (v[i] == x)
//      {
//          v.erase(v.begin() + i);
//          return removeNumber(v, i, x);
//      }
//      else
//          return removeNumber(v, i + 1, x);
//  }

// int main()
// {
//     ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
//     int n, x;
//     cin >> n >> x;
//     vector<int> v(n);
//     for (int i = 0; i < n; i++)
//         cin >> v[i];
//     v = removeNumber(v, 0, x);
//     for (int i = 0; i < v.size(); i++)
//         cout << v[i] << " ";
//     cout << endl;
//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
vector<int> removeNumber(vector<int> v, int x)
{
    v.erase(remove(v.begin(), v.end(), x), v.end());
    return v;
}
int main()
{
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    int n, x;
    cin >> n >> x;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    v = removeNumber(v, x);
    for (int i = 0; i < v.size(); i++)
        cout << v[i] << " ";
    cout << endl;
    return 0;
}