#include <bits/stdc++.h>

using namespace std;

// Given an integer array nums of unique elements, return all possible 
// subsets
//  (the power set).

// The solution set must not contain duplicate subsets. Return the solution in any order.

 

// Example 1:

// Input: nums = [1,2,3]
// Output: [[],[1],[2],[1,2],[3],[1,3],[2,3],[1,2,3]]
// Example 2:

// Input: nums = [0]
// Output: [[],[0]]
 

// Constraints:

// 1 <= nums.length <= 10
// -10 <= nums[i] <= 10
// All the numbers of nums are unique.


class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> solution;
        vector<int> cur;
        dfs(0, nums, cur, solution);
        return solution;
        
    }

    void dfs(int index, vector<int>& nums, vector<int> &cur, vector<vector<int>> &solution){
        
        solution.push_back(cur);


        for(int i = index; i<nums.size();i++){
            cur.push_back(nums[i]);
            dfs(i+1, nums, cur, solution);
            cur.pop_back(); //backtracking
        }
    }
};