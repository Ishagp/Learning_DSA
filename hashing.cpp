#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// int main()
// {
//     int n;
//     cin >> n;
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }

//     // pre compute
//     int hash[26] = {0};
//     for (int i = 0; i < n; i++)
//     {
//         hash[arr[i]] += 1;
//     }

//     int q;
//     cin >> q;
//     while (q--)
//     {
//         int num;
//         cout<<"Enter num:";
//         cin >>num;
//         // fetch
//         cout <<"num of occurance is:"<< hash[num] << endl;
//     }
//     return 0;
// }

// Character hashing
// int main()
// {
//     string s;
//     cout << "Enter string: ";
//     cin >> s;

//     // pre compute
//     int hash[256] = {0};
//     for (int i = 0; i < s.size(); i++)
//     {
//         hash[s[i] - 'a']++;
//     }

//     int q;
//     cin >> q;
//     while (q--)
//     {
//         char c;
//         cout << "Character is: ";
//         cin >> c;
//         // fetch
//         cout << "Occurance: " << hash[c - 'a'] << endl;
//     }
//     return 0;
// }

// using map
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // pre compute
    unordered_map<int, int> mpp;
    for (int i = 0; i < n; i++)
    {
        mpp[arr[i]]++;
    }

    // to iterate in the map
    for (auto it : mpp)
    {
        cout << it.first << "->" << it.second << endl;
    }

    // to find out the highest and lowest frequency
    int highestFreq = INT_MIN;
    int lowestFreq = INT_MAX;
    int highElement, lowElement;

    for (auto it : mpp)
    {
        if (it.second > highestFreq)
        {
            highestFreq = it.second;
            highElement = it.first;
        }
        if (it.second < lowestFreq)
        {
            lowestFreq = it.second;
            lowElement = it.first;
        }
    }

    cout << "Element with Highest Frequency: " << highElement
         << " (Count: " << highestFreq << ")" << endl;

    cout << "Element with Lowest Frequency: " << lowElement
         << " (Count: " << lowestFreq << ")" << endl;

    int q;
    cin >> q;
    while (q--)
    {
        int num;
        cout << "Num is: ";
        cin >> num;
        // fetch
        cout << "Occurance: " << mpp[num] << endl;
    }
    return 0;
}