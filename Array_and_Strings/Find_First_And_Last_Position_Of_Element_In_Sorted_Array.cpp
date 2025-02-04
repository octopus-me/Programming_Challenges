#include <bits/stdc++.h>

using namespace std;

// Given an array of integers nums sorted in non-decreasing order, find the starting and ending position of a given target value.

// If target is not found in the array, return [-1, -1].

// You must write an algorithm with O(log n) runtime complexity.

 

// Example 1:

// Input: nums = [5,7,7,8,8,10], target = 8
// Output: [3,4]
// Example 2:

// Input: nums = [5,7,7,8,8,10], target = 6
// Output: [-1,-1]
// Example 3:

// Input: nums = [], target = 0
// Output: [-1,-1]
 

// Constraints:

// 0 <= nums.length <= 105
// -109 <= nums[i] <= 109
// nums is a non-decreasing array.
// -109 <= target <= 109

class Solution {
public:
    vector<int> searchRange(vector<int> nums, int target) {
        int left = 0, right = nums.size() - 1;

        int l = -1, r = -1;

        while(left <= right){
            int mid = left + (right-left) / 2;

            if(nums[mid] == target){
                if(mid == nums.size() - 1){
                    r=mid;
                    break;
                } else if(nums[mid+1] != target){
                    r=mid;
                    break;
                } else {
                    left = mid + 1;
                }
            }

            else if(nums[mid] < target){
                left = mid + 1;
            } else {
                right = mid - 1;
            }

        }

        left = 0, right = nums.size() - 1;

        while(left <= right){
            int mid = left + (right-left) / 2;

            if(nums[mid] == target){
                if(mid==0){
                    l=mid;
                    break;
                } else if(nums[mid-1] != target){
                    l=mid;
                    break;
                } else {
                    right = mid - 1;

                    
                }
            }
            else if(nums[mid] < target){
                left = mid + 1;
            } else {
                right = mid - 1;
            }

        }

        return {l,r};
        
    }
};

int main(){
    Solution s;
    
    for(int i: s.searchRange({},0)){
        cout << i << " ";
    }
    cout << endl;
    return 0;
}