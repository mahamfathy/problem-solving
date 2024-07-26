#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> nums = {10, 20, 30, 40};
    vector<int>::iterator first = nums.begin();
    vector<int>::iterator last = nums.end() - 1;
    cout << *first << endl;
    cout << first[1] << endl;
    cout << first[2] << endl;
    cout << first[3] << endl;
    cout << *last << endl;
    cout << last[-1] << endl;
    cout << *last - 1 << endl; // it will make a calc
    cout << *(last - 1) << endl;
    cout << last[-2] << endl;
    cout << *(last - 2) << endl;
    cout << last[-3] << endl;
    cout << *(last - 3) << endl;
    advance(first, 3);
    cout << *first << endl;
    advance(first, -2);
    cout << *first << endl;

    return 0;
}