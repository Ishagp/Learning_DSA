#include <iostream>
#include <limits.h>
using namespace std;

int main()
{
    int arr[]={2,5,3,2,6,7,9};
    int size = 7;
    int maxi = INT_MIN;
    int mini = INT_MAX;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > maxi)
        {
            maxi = arr[i];
        }

        if (arr[i] < mini)
        {
            mini = arr[i];
        }
        
        
    }
    cout << "max num is " << maxi << endl;
    cout << "min num is " << mini << endl;

    return 0;
}