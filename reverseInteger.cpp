#include <iostream>
using namespace std;

int reverse_Int(int n)
{
    bool isNeg = false;
    int ans = 0;
    if (n < INT_MIN)
    {
        return 0;
    }
    if (n < 0)
    {
        isNeg = true;
        n = -n;
    }
    while (n > 0)
    {
        if (ans > INT_MAX / 10)
        {
            return 0;
        }
        int rem = n % 10;
        ans = ans * 10 + rem;
        n = n / 10;
    }
    cout<<ans;

    return isNeg ? -ans: ans;
}

int main()
{
    int n;
    cin >> n;
    reverse_Int(n);

}