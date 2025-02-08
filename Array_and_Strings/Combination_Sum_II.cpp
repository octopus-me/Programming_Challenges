#include <bits/stdc++.h>

using namespace std;

// Given a collection of candidate numbers (candidates) and a target number (target), find all unique combinations in candidates where the candidate numbers sum to target.

// Each number in candidates may only be used once in the combination.

// Note: The solution set must not contain duplicate combinations.

 

// Example 1:

// Input: candidates = [10,1,2,7,6,1,5], target = 8
// Output: 
// [
// [1,1,6],
// [1,2,5],
// [1,7],
// [2,6]
// ]
// Example 2:

// Input: candidates = [2,5,2,1,2], target = 5
// Output: 
// [
// [1,2,2],
// [5]
// ]
 

// Constraints:

// 1 <= candidates.length <= 100
// 1 <= candidates[i] <= 50
// 1 <= target <= 303

class Solution {
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {

        sort(candidates.begin(), candidates.end());
        vector<vector<int>> result;
        vector<int> cur;

        dfs(0,candidates,cur,result,target);

        return result;
        
    }

    void dfs(int index, vector<int> & candidates, vector<int> &cur, vector<vector<int>> &result, int target){

        // Base will be included here
        if(target == 0){
            result.push_back(cur);
            return;
        }

        for(int i=index;i<candidates.size();i++){

            if(i>index && candidates[i] == candidates[i-1]) continue; //Avoid duplicates

            if(candidates[i] > target) continue;

            cur.push_back(candidates[i]);
            dfs(i+1,candidates, cur, result, target - candidates[i]);
            cur.pop_back();
        }

    }
};