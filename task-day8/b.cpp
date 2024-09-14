#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, d;
    cin >> n >> d;
    deque<int> deq1, deq2;

    while (n--)
    {
        int val;
        cin >> val;
        deq1.push_back(val);
    }
    while (d-- > 0 and !deq1.empty())
    {
        deq2.push_back(deq1.front());
        deq1.pop_front();
    }
    deq1.insert(deq1.end(), deq2.begin(), deq2.end());
    for (auto i : deq1)
        cout << i << " ";
    cout << endl;
    return 0;
}