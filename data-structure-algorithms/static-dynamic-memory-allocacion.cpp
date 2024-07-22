#include <iostream>
using namespace std;

int main()
{
    int size;
    cin >> size;
    // int arr[size]; so wrong
    int *arr = new int[size];
    cout << arr[size] << endl;
    delete arr;

    return 0;
}