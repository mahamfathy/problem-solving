#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    getline(cin, s);
    string temp = "";
    for (int i = 0; i < s.size(); i++)
    {
        if (isalpha(s[i]))
        {

            if (temp.find(s[i]) != -1)
                continue;
            else
                temp += s[i];
        }
    }
    cout << temp.size() << endl;
    return 0;
}