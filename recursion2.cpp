#include <iostream>
using namespace std;

// void f(int i, int sum)
// {
//     if (i < 1)
//     {
//         cout <<"Sum is: " << sum;
//         return;
//     }
//     f(i - 1, sum + i);
// }

// int main()
// {
//     int sum = 0;
//     int i;
//     cin >> i;
//     f(i, sum);
//     return 0;
// }

// We can also do it by functional

int f(int n)
{
    if (n == 0)
    {
        return 0;
    }
    return n + f(n - 1);
}

int main()
{
    int n;
    cin>>n;
    cout<<f(n);
    return 0;
}