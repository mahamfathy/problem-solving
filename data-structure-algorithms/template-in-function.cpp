#include <iostream>
using namespace std;

// single template

//  template <class t>
//  t sum(t n1, t n2)
//  {
//      return n1 + n2;
//  }

// int main()
// {
//     // cout << sum(10, 20)<<endl;
//     // or
//     cout << sum<int>(10, 20) << endl;
//     cout << sum<double>(10.1, 20.2) << endl;
//     cout << sum<string>("ahmed ", "bayomi") << endl;
//     return 0;
// }

// ========================================== //

// multiple template
template <class t, class t2>
t2 sum(t n1, t2 n2) // make sureto make the return value t2
{
    return n1 + n2;
}
int main()
{
    cout << sum<int, double>(20, 30.3) << endl;
    return 0;
}