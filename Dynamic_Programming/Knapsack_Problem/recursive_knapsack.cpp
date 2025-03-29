#include <bits/stdc++.h>

using namespace std;

class Solution{
    public:
    int knapsack_problem(vector<int> profit, vector<int> weight, int W){
        int size = profit.size();
        return this->recursive_knapsack(profit, weight, W, size);
    }

    private:
    int recursive_knapsack(vector<int> profit, vector<int> weight, int W, int n){
        if(W == 0 || n == 0){ //Base case
            return 0; 
        }

        int include = 0, notInclude;

        if(weight[n-1] < W){
            include = profit[n-1] + recursive_knapsack(profit, weight, W - weight[n-1], n-1);
            
        }

        notInclude = recursive_knapsack(profit, weight, W, n-1);

        return max(include, notInclude);
    }
};

int main(){
    Solution s;

    cout << s.knapsack_problem({1,2,3}, {4,5,1}, 4) << endl;

    return 0;
}