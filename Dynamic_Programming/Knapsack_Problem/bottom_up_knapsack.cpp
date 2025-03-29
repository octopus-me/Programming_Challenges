#include <bits/stdc++.h>

using namespace std;

class Solution{
    public:
    int knapsack(vector<int> profits, vector<int> weights, int W){
        return bottom_up_knapsack(profits, weights, W);

    }

    private:
    int bottom_up_knapsack(vector<int> &profits, vector<int> &weights, int W){
        int n = profits.size();

        vector<vector<int>> dp(n+1, vector<int>(W+1, -1));

        for(int i=0;i<=n;i++){
            for(int j=0;j<=W;j++){

                if(i==0 || j==0){
                    dp[i][j] = 0;
                } else{
                    int pick = 0;

                    if(weights[i-1] < j){
                        pick = profits[i-1] + dp[i-1][j-weights[i-1]];
                    }

                    int notPick = dp[i-1][j];

                    dp[i][j] = max(pick, notPick);

                }
            }
        }
        return dp[n][W];
    }
};

int main(){
    Solution s;

    cout << s.knapsack({1,2,3},{4,5,1}, 4) << endl;
    return 0;
}