// Move zeroes to end

#include <iostream>
#include <vector>
using namespace std;

// Bruteforce approach, it takes O(n) & SC of O(n)

vector<int> moveZeroes(vector<int> &nums)
{
    vector<int> temp;
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] != 0)
        {
            temp.push_back(nums[i]);
        }
    }
    for (int i = 0; i < temp.size(); i++)
    {
        nums[i] = temp[i];
    }
    for (int i = temp.size(); i < nums.size(); i++)
    {
        nums[i] = 0;
    }

    return nums;
}

int main()
{
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }
    nums = moveZeroes(nums);
    for (int i = 0; i < n; i++)
    {
        cout << nums[i] << " ";
    }
    return 0;
}



//Optimal solution  , it takes O(n) and space of O(1)

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int j = -1;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i]==0){
                j = i;
                break;
            }
        }

        if(j==-1) return ;

        for(int i = j+1; i<nums.size(); i++){
            if(nums[i]!=0){
                swap(nums[i], nums[j]);
                j++;
            }
        }
    }
};