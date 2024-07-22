#include <iostream>
using namespace std;
int main()
{
    string products[] = {"item 1", "item 2", "item 3"};
    string size[] = {"small", "medium", "large"};

    for (int i = 0; i < 3; i++)
    {
        cout << "product: " << products[i] << endl;
        for (int j = 0; j < 3; j++)
        {
            cout << ((j < 2) ? size[j] + ", " : size[j]);
            // cout << size[j] << ((j < 2) ? ", " : "");
        }
        cout << endl; // Add newline after each product's sizes
    }

    // for (int i = 0; i < 3; i++)
    // {
    //     cout << "product: " << products[i] << endl;
    //     for (int j = 0; j < 3; j++)
    //     {
    //         if (j < 2)
    //         {
    //             cout << size[j] << ", ";
    //         }
    //         else
    //         {

    //             cout << size[j];
    //         }
    //         cout << endl;
    //     }
    cout << endl;

    return 0;
}