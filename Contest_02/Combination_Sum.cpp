#include <bits/stdc++.h>

using namespace std;

class Solution{
public:
	vector<vector<int>> combinationSum(vector<int> & candidates, int target){
		vector<vector<int>> answer;
		vector<int> current;
		dfs(target, current, candidates, answer, 0);
	
	}

	void dfs(int target, vector<int> current, vector<int> &candidates, vector<vector<int>> &answer, int index){
		if(target == 0){
			answer.push_back(current);
			return;
		}

		for(int i=index;i<candidates.size();i++){
			if(candidates[i] > target) continue;

			current.push_back(candidates[i]);
			dfs(target - candidates[i], current, candidates, answer, i);
			current.pop_back();
		}
	}
};


int main(){return 0;}
