#include <bits/stdc++.h>

using namespace std;

class Solution {
    public:
        vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
            vector<vector<int>> answer;
            vector <int> cur;
    
            sort(candidates.begin(), candidates.end());
    
            dfs(candidates, answer, target, cur, 0);
            return answer;
            
        }
    
        void dfs(vector<int> &candidates, vector<vector<int>> &answer, int target, vector<int> &current, int index){
            if(0 == target){
                answer.push_back(current);
                return;
            }
    
            for(int i=index; i<candidates.size();i++){
    
                if(i>index &&  candidates[i] == candidates[i-1]) continue;
    
                if(candidates[i] > target ) continue;
    
                current.push_back(candidates[i]);
                dfs(candidates, answer, target - candidates[i], current, i + 1);
                current.pop_back();
            }
        }
    };
    
    