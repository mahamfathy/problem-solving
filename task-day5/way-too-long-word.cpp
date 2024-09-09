
// #include <iostream>
// #include <string>
// using namespace std;

// int main()
// {
//     int n;
//     cin >> n;
//     string words[n];

//     for (int i = 0; i < n; i++)
//     {
//         cin >> words[i];
//     }

//     for (int i = 0; i < n; i++)
//     {
//         words[i].size() <= 10 ? cout << words[i] << endl : cout << words[i].front() << words[i].size() - 2 << words[i].back() << endl;
//     }

//     return 0;
// }
#include "iostream"
#include "string"
using namespace std;

int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        string s;
        cin >> s;
        if (s.size() <= 10)
            cout << s << '\n';
        else
            cout << s.front() << s.size() - 2 << s.back() << '\n';
    }
    return 0;
}