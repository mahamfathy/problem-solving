// #include <iostream>
// #include <string>
// using namespace std;

// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         string s;
//         cin >> s;
//         for (int i = 1; i < s.size(); i++)
//         {
//             if (s[i] == s[i + 1])
//                 s.erase(i, 1);
//         }
//         cout << s << endl;
//     }

//     return 0;
// }
// #include <iostream>
// #include <string>
// using namespace std;

// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         string s;
//         cin >> s;
//         for (int i = 0; i < s.size(); i += 2)
//         {
//             cout << s[i];
//             cout << s.back() << endl;
//         }
//     }

//     return 0;
// }
#include "iostream"

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string b;
        cin >> b;
        for (int i = 0; i < b.size(); i += 2)
            cout << b[i];
        cout << b.back() << '\n';
    }
    return 0;
}