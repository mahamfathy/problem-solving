#include <iostream>
#include <cstring> //or <string.h>
// #include <string.h>
using namespace std;

int main()
{
    char fname[] = "osama ";
    char lname[] = "elzero";
    cout << fname << lname << endl;
    cout << strcat(fname, lname) << endl;
    string firstName = "maha ";
    string lastName = "fathy";
    cout << firstName + lastName << endl;
    cout << firstName.append(lastName) << endl;
    return 0;
}