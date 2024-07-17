#include <iostream>
using namespace std;
int main()
{
    int metal_a, metal_b;
    cin >> metal_a >> metal_b;
    cout << (metal_a > 0 && metal_b == 0 ? "Gold" : (metal_a == 0 && metal_b > 0 ? "Silver" : "Alloy")) << endl;
    return 0;
}