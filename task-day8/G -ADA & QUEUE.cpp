#include <bits/stdc++.h>
using namespace std;
int main()
{
    int q;
    cin >> q;
    bool rev = false;
    deque<int> deq;
    while (q--)
    {
        string s;
        cin >> s;
        if (s == "push_back")
        {
            int x;
            cin >> x;
            if (!rev)
                deq.push_back(x);
            else
                deq.push_front(x);
        }
        if (s == "toFront")
        {
            int x;
            cin >> x;
            if (!rev)
                deq.push_front(x);
            else
                deq.push_back(x);
        }

        if (s == "front")
        {
            if (deq.empty())
            {
                cout << "No job for Ada?" << '\n';
                continue;
            }

            if (!rev)
            {
                cout << deq.front() << '\n';
                deq.pop_front();
            }
            else
            {
                cout << deq.back() << '\n';
                deq.pop_back();
            }
        }
        if (s == "back")
        {
            if (deq.empty())
            {
                cout << "No job for Ada?" << '\n';
                continue;
            }
            if (!rev)
            {
                cout << deq.back() << '\n';
                deq.pop_back();
            }
            else
            {
                cout << deq.front() << '\n';
                deq.pop_front();
            }
        }
        if (s == "reverse")
            rev = !rev;
    }
    return 0;
}