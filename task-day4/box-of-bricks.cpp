#include <iostream>
using namespace std;

int main()
{
    int setNumber = 1;
    while (true)
    {
        int n;
        cin >> n;

        if (n == 0)
        {
            break;
        }

        int heights[50];
        int totalBricks = 0;

        for (int i = 0; i < n; ++i)
        {
            cin >> heights[i];
            totalBricks += heights[i];
        }

        int targetHeight = totalBricks / n;
        int moves = 0;

        for (int i = 0; i < n; ++i)
        {
            if (heights[i] > targetHeight)
            {
                moves += heights[i] - targetHeight;
            }
        }

        cout << "Set #" << setNumber << endl;
        cout << "The minimum number of moves is " << moves << "." << endl;
        cout << endl;

        ++setNumber;
    }

    return 0;
}
