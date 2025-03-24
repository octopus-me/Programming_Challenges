#include <bits/stdc++.h>

using namespace std;


class Solution{
    public:
    int minCostClimbingStairs(vector<int> cost){
        int size = cost.size();

        cost.push_back(0);

        vector<int> dp(size+1, 0);

        dp[0] = cost[0];
        dp[1] = cost[1];

        for(int i = 2;i<=size;i++){
            dp[i] = cost[i] + min(dp[i-1],dp[i-2]);
        }

        return dp[size];


    }
};

int main(){
    Solution s;
    cout << s.minCostClimbingStairs({1,100,1,1,1,100,1,1,100,1}) << endl;
    return 0;
}