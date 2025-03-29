#include <bits/stdc++.h>


using namespace std;


// A cada elemento i:
// Inserir i na mochila e calcular o máximo
// Não inserir o i na mochila e calcular o máximo
// Entre as duas opções, ver qual retornou o máximo
class Solution{
    public:
    int knapsack(vector<int> profits, vector<int> weight, int W){
        return aux_knapsack(profits, weight, W, 0);
    }

    private:
    int aux_knapsack(vector<int> profits, vector<int> weight, int W, int index){
        if(W == 0 || index >= profits.size()){
            return 0;
        }
        
        int includeCurrent = 0;
        if(weight[index] < W){
            includeCurrent = profits[index] + aux_knapsack(profits, weight, W - weight[index], index + 1);
        }

        int notIncludeCurrent = aux_knapsack(profits, weight, W, index+1);

        return max(includeCurrent, notIncludeCurrent);
    }
};


int main(){
    Solution s;

    cout << s.knapsack({1,2,3}, {4,5,1}, 4) << endl;
    return 0;
}