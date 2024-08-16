#include <iostream>
using namespace std;

const int MAX_DAYS = 150000;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        int prices[MAX_DAYS];

        for (int i = 0; i < n; ++i)
        {
            cin >> prices[i];
        }

        int badPriceCount = 0;
        int minPriceFromEnd = 1000001;
        for (int i = n - 1; i >= 0; --i)
        {
            if (prices[i] > minPriceFromEnd)
            {
                ++badPriceCount;
            }
            if (prices[i] < minPriceFromEnd)
            {
                minPriceFromEnd = prices[i];
            }
        }

        cout << badPriceCount << endl;
    }

    return 0;
}
