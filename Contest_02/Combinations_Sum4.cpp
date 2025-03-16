#include <bits/stdc++.h>

using namespace std;

class Solution{
    public:

    int combinationSum4(vector<int>& nums, int target){
        vector<unsigned int> dp(target+1,0);
        dp[0] = 1;

        for(int i=1;i<=target;i++){
            for(int num: nums){
                if(num <= i){
                    dp[i] += dp[i-num];

                }
            }
        }
        return target + 1;
    }

};

// nums = [1,2,3] target = 4
// dp = [0, 0, 0, 0, 0]

// If target==0, we can only form with an empty vector, thus just one option, so dp[0] = 1
// dp = [1, 0, 0, 0, 0]

// If target==1, I can only build a solution with values from the vector that are smaller or equal to target. 
// For each small value that target I have already built in my dp array
// For nums[0] = 1 that dp[1] = dp[1] + dp[1 - 1]


//target = 7

// 
