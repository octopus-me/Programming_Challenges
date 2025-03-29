#include <bits/stdc++.h>

using namespace std;

class Solution{
    public:
    int knapsack(vector<int> profits, vector<int> weight, int W){
        int n = weight.size();
        vector<vector<int>> memo(n+1, vector<int>(W+1, -1));

        return rec_knapsack(profits, weight, W, n, memo);
    }

    private:
    int rec_knapsack(vector<int> &profits, vector<int> &weight, int W, int n, vector<vector<int>> &memo){
        if(n == 0 || W == 0) return 0;

        if(memo[n][W] != -1) return memo[n][W];

        int includeCurrent = 0;
        if(weight[n - 1] < W){
            includeCurrent = profits[n-1] + rec_knapsack(profits, weight, W - weight[n-1], n-1, memo);
        }

        int notIncludeCurrent = rec_knapsack(profits, weight, W, n-1, memo);

        return memo[n][W] =  max(includeCurrent, notIncludeCurrent);



    }
};


int main(){
    Solution s;

    cout << s.knapsack({1,2,3},{4,5,1}, 4) << endl;
    return 0;
}