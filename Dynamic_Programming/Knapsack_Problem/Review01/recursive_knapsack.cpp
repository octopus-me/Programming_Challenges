#include <bits/stdc++.h>

using namespace std;


class Solutions{
    public:
    int knapsack(vector<int> weights, vector<int> profits, int W){
        return rec_knapsack(weights, profits,W, weights.size());
    }

    private:
    int rec_knapsack(vector<int> weight, vector<int> profits, int W, int n){
        if(n==0 || W == 0) return 0;

        int pick = 0;

        if(weight[n-1] < W){
            pick = profits[n-1] + rec_knapsack(weight, profits, W - weight[n-1], n - 1);
        }

        int notPick = rec_knapsack(weight, profits, W, n - 1);

        return max(pick, notPick);
    }
};


int main(){
    Solutions s;

    cout << s.knapsack({4,5,1}, {1,2,3}, 4) << endl;

    return 0;
}