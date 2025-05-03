#include <bits/stdc++.h>

using namespace std;

class Solution{
    public:
    int knapsack(vector<int> profit, vector<int> weight, int W){
        int n = weight.size();

        vector<vector<int>> dp(n+1, vector<int>(W+1,0));

        for(int i=1;i<=n;i++){
            for(int j=1;j<=W;j++){
                int pick = 0;
                if(weight[i-1] <= j){
                    pick = profit[i-1] + dp[i-1][j-weight[i-1]];
                }
                int notPick = dp[i-1][j];

                dp[i][j] = max(pick, notPick);
            }
        }
        return dp[n][W];
    }
};


int main(){
    Solution s;
    cout << s.knapsack({4,5,6}, {1,2,3}, 6) << endl;
    return 0;
}