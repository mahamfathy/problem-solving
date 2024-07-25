#include <iostream>
#include <vector>

using namespace std;

int main()
{

    vector<int> numsOne = {10, 50, 60, 40};
    vector<int> numsTwo{10, 20, 30, 40, 50};
    vector<int> numsThree(4, 50);

    for (int i = 0; i < numsOne.size(); i++)
    {
        // cout << numsOne[i] << endl;
        cout << numsOne.at(i) << "  ";
    }

    cout << "\n==================\n";

    for (int i = 0; i < numsTwo.size(); i++)
    {
        cout << numsTwo.at(i) << "  ";
    }
    cout << "\n==================\n";
    for (int i = 0; i < numsThree.size(); i++)
    {
        cout << numsThree.at(i) << "  ";
    }
    cout << "\n==================\n";

    cout << numsThree.size() << endl;

    // numsThree.at(4) = 1000; wrong to push any value
    numsThree.at(0) = 1000;
    numsThree.push_back(1000);
    cout << numsThree.size();
    cout << "\n==================\n";

    for (int i = 0; i < numsThree.size(); i++)
    {
        cout << numsThree.at(i) << "  ";
    }
    return 0;
}