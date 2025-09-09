#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int c = 1;
    // Growing phase
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << c;
            if (j < i)
            {
                cout << "*";
            }
            c++;
        }
        cout << endl;
    }
    // Shrinking phase
    int start = c - n;
    for (int i = 0; i < n; i++)
    {
        int k = start;
        for (int j = 0; j <= n - i - 1; j++)
        {
            cout << k;
            if (j < n - i - 1)
            {
                cout << "*";
            }
            k++;
        }
        start = start - (n - i - 1);
        cout << endl;
    }
}
