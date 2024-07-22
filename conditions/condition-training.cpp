#include <iostream>
using namespace std;
int main()
{
    // // 1- EVEN | ODD CHECKER //

    // int num;
    // cin >> num;
    // num % 2 == 0 ? cout << "EVEN" : cout << "ODD" << endl;

    // // 2- FIND GREATEST NUMBER //

    // int num1, num2, num3;
    // cin >> num1 >> num2 >> num3;
    // if (num1 > num2 && num1 > num3)
    // {
    //     cout << num1 << " is greatest" << endl;
    // }
    // else if (num2 > num1 && num2 > num3)
    // {
    //     cout << num2 << " is greatest" << endl;
    // }
    // else
    // {
    //     cout << num3 << " is greatest" << endl;
    // }
    // cout << (num1 > num2 && num1 > num3) ? num1 : (num2 > num1 && num2 > num3) ? num2 : num3 << endl;

    // 3- SIMPLE CALCULATER //

    // cout << "1- +" << endl;
    // cout << "2- -" << endl;
    // cout << "3- *" << endl;
    // cout << "4- /" << endl;
    // int number_one, number_two, op;
    // cin >> number_one >> number_two >> op;

    // switch (op)
    // {
    // case 1:
    //     cout << number_one + number_two << endl;
    //     break;
    // case 2:
    //     cout << number_one - number_two << endl;
    //     break;
    // case 3:
    //     cout << number_one * number_two << endl;
    //     break;
    // case 4:
    //     cout << number_one / number_two << endl;
    //     break;

    // default:
    //     cout << "INVALID INPUT" << endl;
    //     return 0;
    // }

    char c;
    cin >> c;

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

    return 0;
}