#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // Pair sum
    vector<int> arr{10, 20, 40, 60, 70, 30, 50};
    int sum = 80;

    for (int i = 0; i < arr.size(); i++)
    {
        int e1 = arr[i];

        for (int j = i + 1; j < arr.size(); j++)
        {
            int e2 = arr[j];

            for (int k = j + 1; k < arr.size(); k++)
            {
                if (e1 + e2 + arr[k] == sum)
                {
                    cout << "Pair is :" << e1 << "," << e2 << "," << arr[k] << endl;
                }
            }
        }
    }
    return 0;
}