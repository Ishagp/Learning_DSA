#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < 2 * n - 1; i++)
    {
        // int cond = 0;
        // if (i < n)
        // {
        //     cond = i;
        // }
        // else
        // {
        //     cond = n - (i % n) - 2;
        // }
        int cond = i < n ? i : n - (i % n) - 2; // To make the lines of code short
        for (int j = 0; j <= cond; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}