#include <bits/stdc++.h>

using namespace std;


class Solution{
	public:
	int cut_rod(vector<int> &prices, int n){
		int revenue[n+1];
		revenue[0] = 0;
		for(int j=1;j<=n;j++){
			int q = -100000000;
			for(int i=1;i<=j;i++){
				q = max(q, prices[i-1] + revenue[j-i]);
			}
			revenue[j] = q;
		}
		return revenue[n];
	}
};

int main(){
	Solution s;
	vector<int> prices = {1,2,5,5,5};
	int n = 5;
	int res = s.cut_rod(prices, n);
	cout << res << endl;
	return 0;
}
