#include <bits/stdc++.h>


using namespace std;


class Solution{
    public:
    int climbStairs(int n){

        if(n==1) return 1;

        int first_last = 1;
        int second_last = 1;

        for(int i=2;i<=n;i++){
            int aux = first_last + second_last;
            second_last = first_last;
            first_last = aux;
        }

        return first_last;
    }
};

int main(){
    Solution s;

    cout << s.climbStairs(4) << endl;

    return 0;
}