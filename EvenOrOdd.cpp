#include <iostream>
using namespace std;

void Even_or_Odd(int num)
{
    if (num % 2 == 0)
    {
        cout << "Even number";
    }
    else
    {
        cout << "Odd number";
    }
}

int main()
{
    int num;
    cin >> num;
    Even_or_Odd(num);
}