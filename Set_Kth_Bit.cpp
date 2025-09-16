#include <iostream>
using namespace std;

int setKthBit(int N, int K)
{
    int mask = 1 << K;
    int ans = N | mask;
    return ans;
}

int main()
{
    int N;
    cin >> N;
    int K;
    cin >> K;
    setKthBit(N, K);
    return 0;
}

// I didnt get this answer , once go through it 