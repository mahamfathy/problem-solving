#include <bits/stdc++.h>
using namespace std;
int main()
{
    stack<int> st;
    int n, x;
    cin >> n >> x;
    while (n--)
    {
        int x;
        cin >> x;
        st.push(x);
    }

    while (x--)
    {
        st.pop();
    }
    while (!st.empty())
    {
        cout << st.top() << " ";
        st.pop();
    }
    return 0;
}