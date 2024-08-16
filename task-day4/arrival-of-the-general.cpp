#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int heights[n];
    int max_index = 0, min_index = 0;
    for (int i = 0; i < n; ++i)
    {
        cin >> heights[i];
        if (heights[i] > heights[max_index])
        {
            max_index = i;
        }
        if (heights[i] <= heights[min_index])
        {
            min_index = i;
        }
    }

    int moves_to_front = max_index;

    int moves_to_end = (n - 1) - min_index;

    if (max_index > min_index)
    {
        moves_to_end--;
    }
    cout << moves_to_front + moves_to_end << endl;

    return 0;
}
