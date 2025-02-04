#include <bits/stdc++.h>

using namespace std;

// 18. 4Sum
// Solved
// Medium
// Topics
// Companies
// Given an array nums of n integers, return an array of all the unique quadruplets [nums[a], nums[b], nums[c], nums[d]] such that:

// 0 <= a, b, c, d < n
// a, b, c, and d are distinct.
// nums[a] + nums[b] + nums[c] + nums[d] == target
// You may return the answer in any order.

 

// Example 1:

// Input: nums = [1,0,-1,0,-2,2], target = 0
// Output: [[-2,-1,1,2],[-2,0,0,2],[-1,0,0,1]]
// Example 2:

// Input: nums = [2,2,2,2,2], target = 8
// Output: [[2,2,2,2]]
 

// Constraints:

// 1 <= nums.length <= 200
// -109 <= nums[i] <= 109
// -109 <= target <= 109

class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> result;
        int n = nums.size();
        if (n < 4) return {}; // Correcting base case

        sort(nums.begin(), nums.end());

        for (int fixed1 = 0; fixed1 < n - 3; fixed1++) {
            if (fixed1 > 0 && nums[fixed1] == nums[fixed1 - 1]) continue; // Skip duplicates

            for (int fixed2 = fixed1 + 1; fixed2 < n - 2; fixed2++) {
                if (fixed2 > fixed1 + 1 && nums[fixed2] == nums[fixed2 - 1]) continue; // Skip duplicates

                int left = fixed2 + 1, right = n - 1;

                while (left < right) {
                    long long sum = (long long)nums[fixed1] + nums[fixed2] + nums[left] + nums[right];

                    if (sum == target) {
                        result.push_back({nums[fixed1], nums[fixed2], nums[left], nums[right]});

                        // Skip duplicate values
                        while (left < right && nums[left] == nums[left + 1]) left++;
                        while (left < right && nums[right] == nums[right - 1]) right--;

                        left++;
                        right--;
                    } else if (sum < target) {
                        left++;
                    } else {
                        right--;
                    }
                }
            }
        }
        return result;
    }
};


int main(){
    Solution s;
    s.fourSum({2,2,2,2},8);
    return 0;
}