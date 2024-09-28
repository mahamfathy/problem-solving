#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    int n,m;
    cin>>n>>m;
    set <int> st;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        for(int j=0;j<x;j++){
            int y;
            cin>>y;
            st.insert(y);
        }
    }
    cout<<(st.size()==m?"YES":"NO")<<endl;
    return 0;
}