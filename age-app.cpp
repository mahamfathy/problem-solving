#include <iostream>
using namespace std;
int main()
{
    cout << "=== calculate your age ===\n"
         << endl;

    int age;
    cin >> age;
    int age_in_days = age * 365;
    int age_in_hours = age_in_days * 24;
    int age_in_minutes = age_in_hours * 60;
    cout << "your age in days is " << age_in_days << endl;
    cout << "your age in hours is " << age_in_hours << endl;
    cout << "your age in minutes is " << age_in_minutes << endl;
    // cout << "your age is " << age << endl;
    return 0;
}