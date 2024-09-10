// #include <iostream>
// #include <string>
// using namespace std;

// int main()
// {
//     string s;
//     getline(cin, s);
//     string temp = "";
//     for (int i = 0; i < s.size(); i++)
//     {
//         if (isalpha(s[i]))
//         {
//             if (temp.find(s[i]) == -1)
//                 temp += s[i];

//             // if (temp.find(s[i]) != -1)
//             //     continue;
//             // else
//             //     temp += s[i];
//         }
//     }
//     cout << temp.size() << endl;
//     return 0;
// }

// #include <iostream>
// #include <string>
// using namespace std;

// int main()
// {
//     string s;
//     getline(cin, s);
//     int count = 0;
//     for (int i = 0; i < 26; i++)
//     {
//         if (s.find(char(i + 97)) != string::npos)
//             count++;
//     }
//     cout << count << endl;
//     return 0;
// }
// #include <iostream>
// #include <string>
// using namespace std;

// int main()
// {
//     string s;
//     getline(cin, s);
//     int count = 0;
//     for (int i = 0; i < 26; i++)
//     {
//         if (s.find(i + 'a') != -1)
//             count++;
//     }
//     cout << count << endl;
//     return 0;
// }
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    getline(cin, s);
    int count = 0;
    for (char c = 'a'; c <= 'z'; c++)
    {
        if (s.find(c) != -1)
            count++;
    }
    cout << count << endl;
    return 0;
}