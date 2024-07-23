#include <iostream>
// #include <math.h>
#include <cctype>
using namespace std;
int main()
{
    cout << tolower('A') << endl;
    cout << char(tolower('A')) << endl;
    cout << char(97) << endl;
    string nameOne = "elZERo";
    // int nameOneSize = size(nameOne);
    int nameOneSize = nameOne.size();
    for (int i = 0; i < nameOneSize; i++)
    {
        if (islower(nameOne[i]))
        {
            nameOne[i] = toupper(nameOne[i]);
        }
        else
        {
            nameOne[i] = tolower(nameOne[i]);
        }
    }

    cout << nameOne << endl;

    string nameTwo = "E l Ze R oo";
    int nameTwoSize = nameTwo.size();
    for (int i = 0; i < nameTwoSize; i++)
    {
        if (isspace(nameTwo[i]))
        {
            continue;
        }
        cout << nameTwo[i];
    }
    cout << endl;
    return 0;
}