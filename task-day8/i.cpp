#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> p(n);
        for (int i = 0; i < n; ++i)
            cin >> p[i];
    }
    vector<int> res;
    deque<int> deq;
    for (int i = n - 1; i >= 0; i--)
    {
        deq.push_front(p[i]);
        res.push_back(deq.front());
        deq.pop_front();
    }
    for (auto i : res)
        cout << i << " ";
    cout << endl;
    return 0;
}