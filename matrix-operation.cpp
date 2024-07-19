#include <iostream>
using namespace std;
const int n = 2, m = 2;
void add(int a[n][m], int b[n][m], int c[n][m])
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            c[i][j] = a[i][j] + b[i][j];
        }
    }
}

void subtract(int a[n][m], int b[n][m], int c[n][m])
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            c[i][j] = a[i][j] - b[i][j];
        }
    }
}

void multiply(int a[n][m], int b[n][m], int c[n][m])
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            c[i][j] = 0;
            for (int k = 0; k < m; k++)
            {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }
}

void printMatrix(int c[n][m])
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << c[i][j] << " ";
        }
        cout << endl;
    }
}
int main()
{
    int a[n][m] = {{2, 5}, {1, 7}};
    int b[n][m] = {{3, 7}, {2, 9}};
    int c[n][m];

    add(a, b, c);
    printMatrix(c); // 5 12
    cout << endl;
    subtract(a, b, c);
    printMatrix(c); // -2 -2
    cout << endl;
    multiply(a, b, c);
    printMatrix(c);
    return 0;
}