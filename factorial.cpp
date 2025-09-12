#include <iostream>
using namespace std;

int factorial(int num)
{
    int fact = 1;
    while (num > 1)
    {
        fact = fact * num;
        num--;
    }
    return fact;
}

int main()
{
    int num;
    cin >> num;
    if (num < 0)
    {
        cout << "Factorial is not defined for negative number" << endl;
    }
    else
    {
        int factOfNum = factorial(num);
        cout << "Factorial is: " << factOfNum << endl;
    }
}