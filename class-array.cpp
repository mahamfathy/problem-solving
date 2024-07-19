#include <iostream>
#include <array>
using namespace std;
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};                  // c-style array
    array<int, 8> arr2 = {1, 2, 3, 4, 5, 6, 7, 8}; // class array
    cout << arr[0] << endl;
    cout << arr[1] << endl;
    cout << arr[2] << endl;
    cout << arr[3] << endl;
    cout << arr[4] << endl;
    cout << endl;
    cout << arr2.size() << endl;
    return 0;
}