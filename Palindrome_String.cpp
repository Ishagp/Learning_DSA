#include <iostream>
using namespace std;

bool f(int i, string &s)
{
    //If i croses the middle index, then it is palindrome and returns true
    if (i > s.size() / 2)
        return true;

    if (s[i] != s[s.size() - i - 1])
        return false;
    // update i and check next indexes
    return f(i + 1, s);
}

int main()
{
    string s;
    cin >> s;
    cout << f(0, s);

    return 0;
}