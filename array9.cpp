// Rearrange array elements by signs 

#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n,0);
        int posIndex = 0, negIndex = 1;
        for(int i = 0; i<n; i++){
            if(nums[i] < 0){
                ans[negIndex] = nums[i];
                negIndex += 2;
            }
            else{
                ans[posIndex] = nums[i];
                posIndex += 2;
            }
        }
        return ans;
    }
};

// Next Permutation

class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int ind = -1;
        int n = nums.size();
        for(int i = n-2; i >= 0; i--){
            if(nums[i] < nums[i+1]){
                ind = i;
                break;
            }
        }

        if(ind == -1){
            reverse(nums.begin(), nums.end());
            return;
        }

        for(int i = n-1; i > ind; i--){
            if(nums[i] > nums[ind]){
                swap(nums[i], nums[ind]);
                break;
            }
        }

        reverse(nums.begin()+ind+1, nums.end());
    }
};


// Leaders in an array

vector<int> superiorElements(vector<int>&a){
    vector<int> ans;
    int maxi = INT_MIN;
    int n = a.size();
    for (int i = n-1; i >=0; i--)
    {
        if (a[i] > maxi)
        {
            ans.push_back(a[i]);
        }
        maxi = max(maxi, a[i]);
    }
    sort(ans.begin(), ans.end());
    return ans;
}


// Longest consecutive sequence in the array

int longestSuccessiveElemens(vector<int>&a){
    int n = a.size();
    int longest = 1;
    unordered_set<int> st;
    for (int i = 0; i < n; i++)
    {
        st.insert(a[i]);
    }
    for(auto it:st){
        if(st.find(it-1) == st.end()){
            int cnt = 1;
            int x = it;
            while(st.find(x+1) != st.end()){
                x = x+1;
                cnt = cnt+1;

            }
            longest = max(longest, cnt);
        }
    }
    return longest;
}