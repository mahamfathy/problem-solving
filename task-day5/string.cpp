#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    // char str[50];
    // cin >> str;
    char str[50] = "hello world";
    char out[50];
    strcpy(out, str);
    cout << out << endl;
    cout << strlen(str) << endl;
    cout << str << endl;
    return 0;
}