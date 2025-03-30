#include <bits/stdc++.h>

using namespace std;

class Solution{
    public:
        int knapsack(vector<int> weights, vector<int> profits, int W){
            int n = weights.size();
            vector<vector<int>> memo(n+1, vector<int>(W+1, -1));

            return memo_rec_knapsack(weights, profits, W, n, memo);

        }
    private:
        int memo_rec_knapsack(vector<int> weights, vector<int> profits, int W, int n, vector<vector<int>> memo){
            if(n==0 || W == 0) return 0;

            if(memo[n][W] != -1) return memo[n][W];

            int pick = 0;

            if(weights[n-1] <= W){
                pick = profits[n-1] + memo_rec_knapsack(weights, profits, W - weights[n-1], n-1, memo);
            }

            int notPick = memo_rec_knapsack(weights, profits, W, n-1, memo);

            return memo[n][W] = max(pick, notPick);

        }
};

int main() {
    Solution s;
    cout << s.knapsack({3, 2, 4}, {30, 20, 50}, 5) << endl;  
    return 0;
}
