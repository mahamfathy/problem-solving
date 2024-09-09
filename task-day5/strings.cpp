#include <iostream>
#include <cstring>
#include <string>
using namespace std;
int main()
{
    // char str[50];
    // cin >> str;
    // char str[50] = "hello world";
    // char out[50];
    // strcpy(out, str);
    // cout << out << endl;
    // cout << strlen(str) << endl;
    // cout << str << endl;
    // char str1[] = "Hello ";
    // char str2[] = "World";
    // int compare = strcmp(str1, str2);
    // cout << compare << endl;
    // if (compare == 0)
    //     cout << "equal" << endl;

    // else if (compare > 0)
    //     cout << "str1 is greater" << endl;

    // else
    //     cout << "str2 is greater" << endl;
    // strcat(str1, str2);
    // cout << str1 << endl;
    // cout << strncat(str1, str2, 3) << endl;
    // char str1[] = "hello world hello world";
    // char *pt = strchr(str1, 'b');
    // if (pt != nullptr)
    //     cout << pt - str1 << endl;
    // else
    //     cout << nullptr << " not found" << endl;
    // string string1(6, 'r');
    // cout << string1 << endl;
    string s = "hello";
    s.push_back('o');
    s.append(" world");

    cout
        << s << endl;
    return 0;
}