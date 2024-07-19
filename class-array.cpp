#include <iostream>
#include <array>
using namespace std;
int main()
{
    // int arr[8] = {1, 2, 3, 4, 5, 6, 7, 8}; // c-style array
    array<int, 5> arr2 = {1, 2, 3, 4, 5}; // class array
    cout << "Size before fill: " << arr2.size() << endl;

    cout << arr2[0] << endl;
    cout << arr2[1] << endl;
    cout << arr2[2] << endl;
    cout << arr2[3] << endl;
    cout << arr2[4] << endl;

    arr2.fill(5);
    cout << arr2[0] << endl;
    cout << arr2[1] << endl;
    cout << arr2[2] << endl;
    cout << arr2[3] << endl;
    cout << arr2[4] << endl;
    arr2.fill('a'); // it will put ascii value
    cout << arr2[0] << endl;
    cout << arr2[1] << endl;
    cout << arr2[2] << endl;
    cout << arr2[3] << endl;
    cout << arr2[4] << endl;
    arr2.fill(true);
    cout << arr2[0] << endl;
    cout << arr2[1] << endl;
    cout << arr2[2] << endl;
    cout << arr2[3] << endl;
    cout << arr2[4] << endl;
    return 0;
}