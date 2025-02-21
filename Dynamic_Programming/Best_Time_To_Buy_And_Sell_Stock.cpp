#include <bits/stdc++.h>

using namespace std;

class Solution{
	public:
		int maxProfit(vector<int>& prices){
			int min = INT_MAX;
			int max_profit = 0;

			for(int i: prices){
				if(min > i){
					min = i;
				}
				int value = i - min;
				if(value > max_profit) max_profit = value;
			}
			return max_profit;
		}
};

int main(){
	Solution s;
	
	vector<int> a = {7,6,4,3,1}; 
	int r = s.maxProfit(a);

	cout << r << endl;
	return 0;
}

