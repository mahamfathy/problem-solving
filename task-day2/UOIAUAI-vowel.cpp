#include <iostream>
using namespace std;
int main()
{
    char c;
    cin >> c;
    // if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
    // {
    //     cout << "Vowel" << endl;
    // }
    // else
    // {
    //     cout << "Consonant" << endl;
    // }
    // or switch case //
    switch (c)
    {
    case 'a':
    case 'o':
    case 'u':
    case 'i':
    case 'e':
        cout << "vowel" << endl;
        break;
    default:
        cout << "consonant" << endl;
        break;
    }
}