#include <bits/stdc++.h>


using namespace std;

class Solution {
public:
    int rob(vector<int>& nums) {
        int dp[nums.size()+1];
        dp[1] = nums[0];
        if(nums.size() == 1) return nums[0];
        dp[2] = max(nums[1], nums[0]);

        int j = 3;
        for(int i=2;i<nums.size();i++){
            dp[j] = max(dp[i], dp[i-1]+nums[i]);
            j++;
        }
        return dp[nums.size()];
        
    }
};

