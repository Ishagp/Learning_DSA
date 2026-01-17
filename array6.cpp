// Union Of Sorted Arrays

#include <iostream>
#include <vector>
#include <set>
using namespace std;

vector<int> UnionOfArray(vector<int> &a, vector<int> &b)
{
    int n1 = a.size();
    int n2 = b.size();

    set<int> st;
    for (int i = 0; i < n1; i++)
    {
        st.insert(a[i]);
    }
    for (int i = 0; i < n2; i++)
    {
        st.insert(b[i]);
    }
    vector<int> temp;
    for (auto it : st)
    {
        temp.push_back(it);
    }
    return temp;
}

int main()
{
    int n;
    cout << "Enter num of element for a: " << endl;
    cin >> n;
    vector<int> a(n);
    cout << "Enter elements in a: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int x;
    cout << "Enter num of element for b: " << endl;
    cin >> x;
    vector<int> b(x);
    cout << "Enter elements in b: " << endl;
    for (int i = 0; i < x; i++)
    {
        cin >> b[i];
    }

    vector<int> temp = UnionOfArray(a, b);
    cout << "Union of arrays is: ";
    for (int i = 0; i < temp.size(); i++)
    {
        cout << temp[i] << " ";
    }
    cout << endl;
    return 0;
}

// Intersection of arrays

vector<int> Intersection(vector<int> &a, int n, vector<int> &b, int m)
{
    int i = 0;
    int j = 0;
    vector<int> ans;
    while (i < n && j < m)
    {
        if (a[i]<b[j])
        {
            i++;
        }

        else if (b[j]<a[i])
        {
            j++;
        }
        else{
            ans.push_back(a[i]);
            i++;
            j++;
        }
        
    }

    return ans;
}