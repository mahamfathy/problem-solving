#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int first_num = n / 100;
    int third_num = n % 10;
    cout << (first_num == third_num ? "Yes" : "No") << endl;
    return 0;
}