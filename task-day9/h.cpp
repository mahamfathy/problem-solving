#include <bits/stdc++.h>
using namespace std;
#define endl '\n';
int main()
{
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    // int n;
    // cin >> n;
    // queue<int> q;
    // priority_queue<int, vector<int>, greater<int>> pq;
    // while (n--)
    // {
    //     int t;
    //     cin >> t;
    //     switch (t)
    //     {
    //     case 1:
    //         int x;
    //         cin >> x;
    //         q.push(x);
    //         break;
    //     case 2:
    //         if (!q.empty())
    //             q.pop();
    //         break;
    //     case 3:
    //         if (!q.empty())
    //         {

    //             pq.push(q.back());
    //             q.pop();
    //             cout << pq.top() << " ";
    //         }
    //     }
    // }

    int n;
    cin >> n;
    queue<int> q;
    priority_queue<int, vector<int>, greater<int>> pq;
    while (n--)
    {
        int type;
        cin >> type;
        if (type == 1)
        {
            int x;
            cin >> x;
            q.push(x);
            pq.push(x);
        }
        else if (type == 2)
        {
            if (!q.empty())
            {
                cout << q.front() << endl;
                q.pop();
            }
        }
        else if (type == 3)
        {
            while (!pq.empty())
                pq.pop();
            queue<int> tempQueue = q;
            while (!tempQueue.empty())
            {
                pq.push(tempQueue.front());
                tempQueue.pop();
            }
            while (!pq.empty())
                pq.pop();
        }
    }
    return 0;
}
