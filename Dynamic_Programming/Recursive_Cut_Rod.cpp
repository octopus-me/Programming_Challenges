#include <bits/stdc++.h>

using namespace std;

int cut_rod(vector<int> prices, int n){
    if(n == 0){
        return 0;
    }
    int q = -2147483648;
    for(int i=1;i<=n;i++){
        q = max(q, prices[i-1] + cut_rod(prices, n-i));
    }
    return q;

}
int main(){
    int q = cut_rod({1,2,2,5},4);

    cout << q << endl;
    return 0;
}