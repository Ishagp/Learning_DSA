#include <iostream>
using namespace std;

int main()
{
    int arr[3]; //declaration of array
    cout << "Enter the numbers in array" << endl;
    for (int i = 0; i < 3; i++)
    {
        cin >> arr[i]; // taking array elements from user
    }
    cout << "values are:" << endl;
    for (int i = 0; i < 3; i++)
    {
        cout << 7*arr[i] << " ";  //printing array elements
    }
    return 0;
}