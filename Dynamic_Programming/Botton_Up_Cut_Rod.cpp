#include <bits/stdc++.h>

using namespace std;


class Solution
{
    public:
        int bottom_up_cut_rod(vector<int> prices, int n){
            vector<int> revenues(n+1);
            revenues[0] = 0;
            for(int j=1;j<=n;j++){
                int q = -100000000;

                for(int i=1;i<=j;i++){
                    q = max(q, prices[i-1] + revenues[j-i]);
                }
                revenues[j] = q;
            }
            return revenues[n];

        }
};
int main(){
    Solution s;

    int r = s.bottom_up_cut_rod({1,2,3,5},4);
    cout << r << endl;
    return 0;
}