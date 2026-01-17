// Remove duplicates in place from sorted array

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    cout << "Enter elemnts";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    set<int> st;
}