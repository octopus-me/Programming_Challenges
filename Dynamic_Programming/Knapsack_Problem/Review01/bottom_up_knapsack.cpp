#include <bits/stdc++.h>

using namespace std;


class Solution{
    public:
        int knapsack(vector<int> weight, vector<int> profit, int W){
            return bottom_up_knapsack(weight, profit, W);
        }
    


    private:
        int bottom_up_knapsack(vector<int> weight, vector<int> profit, int W){
            int n = weight.size();

            vector<vector<int>> dp(n+1, vector<int>(W+1));

            for(int i=0;i<=n;i++){
                for(int j=0;j<=W;j++){
                    if(i==0 || j==0) dp[i][j] = 0;
                    else {
                        int pick = 0;
                        if(j >= weight[i]){
                            pick = profit[i] + dp[i-1][j - weight[i]];
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

    cout << s.knapsack({4,5,1}, {1,2,3}, 4) << endl;
    return 0;
}
