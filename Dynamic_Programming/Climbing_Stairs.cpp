#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int climbStairs(int n) {
        int dp[n+1];

        dp[0] = 0;
        dp[1] = 1; // Only with a single step
        dp[2] = 2; // 1st: Two single steps // 2nd: One double step

        for(int i=3;i<=n;i++){
            dp[i] = dp[i-1] + dp[i-2];
        }

        return dp[n];
        
    }
};

