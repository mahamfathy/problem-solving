#include <iostream>
using namespace std;

int main()
{
    int presses[3][3];
    int result[3][3];
    for (int i = 0; i < 3; ++i)
    {
        for (int j = 0; j < 3; ++j)
        {
            cin >> presses[i][j];
        }
    }
    for (int i = 0; i < 3; ++i)
    {
        for (int j = 0; j < 3; ++j)
        {
            int toggles = presses[i][j];

            if (i > 0)
                toggles += presses[i - 1][j];
            if (i < 2)
                toggles += presses[i + 1][j];
            if (j > 0)
                toggles += presses[i][j - 1];
            if (j < 2)
                toggles += presses[i][j + 1];

            result[i][j] = (toggles % 2 == 0) ? 1 : 0;
        }
    }

    for (int i = 0; i < 3; ++i)
    {
        for (int j = 0; j < 3; ++j)
        {
            cout << result[i][j];
        }
        cout << endl;
    }

    return 0;
}
