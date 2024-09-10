#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main()
{
    string s;
    cin >> s;
    // s[0] = toupper(s[0]);
    s.front() = s[0] - 32;
    cout << s << endl;
    return 0;
}