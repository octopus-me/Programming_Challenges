#include <bits/stdc++.h>

using namespace std;

class Solution{
    private:
        void print_solution(vector<int> sol, int n){
            while(n>0){
                cout << sol[n] << " ";
                n = n - sol[n];
            }
            cout << endl;

        }
    public:
        int extendend_bottom_up(vector<int> prices, int n){
            vector<int> revenue(n+1);
            vector<int> sol(n+1);
            revenue[0]=0;

            for(int j=1;j<=n;j++){
                int q = -100000000;
                for(int i=1;i<=j;i++){

                    if( q < prices[i-1] + revenue[j-i]){
                        q = prices[i-1] + revenue[j-i];
                        sol[j] = i;
                    }
                    revenue[j] = q;

                }
            }
            print_solution(sol,n);
            return revenue[n];
        }
};
int main()
{   
    Solution s;
    s.extendend_bottom_up({1,2,5,5}, 4);
    return 0;
}