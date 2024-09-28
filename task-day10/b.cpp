// #include <bits/stdc++.h>
// using namespace std;
// #define endl '\n'
// //it said time limit exceeded
// int main(){
//     ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
//     set<char> st;
//     char x;
//       while(true){
//        cin >> x;
//         if(isalpha(x))
//          st.insert(x);
//       }
//       cout <<st.size()<<endl;
//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    string s;
    getline(cin, s);
    set<char> st;
    for (char ch : s)
    {
        if (isalpha(ch))
        {
            st.insert(ch);
        }
    }
    cout << st.size() << endl;
    return 0;
}