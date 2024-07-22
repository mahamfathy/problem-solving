#include <iostream>
using namespace std;
int main()
{
    int i = 0;
    while (i < 5)
    {
        cout << i << endl;
        // if i wanna break it manually use break

        if (i == 2)
        {
            break;
        }
        i++;
    }

    return 0;
}