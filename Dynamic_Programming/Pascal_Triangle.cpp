#include <bits/stdc++.h>

using namespace std;

class Solution{
	public:
		vector<vector<int>> generate(int numRows){
			vector<vector<int>> solution(numRows);

			for(int i=0;i<numRows;i++){
				solution[i].resize(i+1,1);

				for(int j=1;j<i;j++){
					solution[i][j] = solution[i-1][j-1] + solution[i-1][j];

				}
			}
			return solution;
		}
};

int main(){
	Solution s;

	vector<vector<int>> sol = s.generate(7);
	for(auto v: sol){
		for( auto i: v){
			cout << i << " ";
		}
		cout << endl;
	}
	return 0;
}
