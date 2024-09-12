#include <bits/stdc++.h>
using namespace std;

int main()
{
int n,curr=0,ans=0;
cin>>n;
while(n--){
    int a,b;
    cin>>a>>b;
    ans=max(ans,curr);
curr-=a;
curr+=b;
}
co
    return 0;
}