// Missing number 

#include <iostream>
#include <vector>
#include <set>
#include <map>
using namespace std;

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int xor1=0;
        int xor2=0;
        int N = nums.size();
        int n = N-1;
        for(int i = 0; i <= n; i++){
            xor2 = xor2 ^ nums[i];
            xor1 = xor1 ^ (i+1);
        }
        // xor1 = xor1 ^ N;
        return xor1 ^ xor2;
    }
};


// Maximum consecutive ones
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count = 0;
        int maxi = 0;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] == 1){
                count++;
                maxi = max(maxi, count);
            }
            else{
                count = 0;
            }
        }
        return maxi;
    }
};


// Single number(find the num that appear once)
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int xor1 = 0;
        for(int i = 0; i < nums.size(); i++){
            xor1 = xor1 ^ nums[i];
        }
        return xor1;
    }
};


//Two Sum
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int, int> mpp;
        int n = nums.size();
        for(int i = 0; i < n; i++){
            int a = nums[i];
            int more = target - a;
            if(mpp.find(more) != mpp.end()){
                return {mpp[more],i};
            }
            mpp[a] = i;
        }
        return {-1,-1};
    }
};