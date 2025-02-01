#include <bits/stdc++.h>

using namespace std;

// You are given an integer array nums where the largest integer is unique.

// Determine whether the largest element in the array is at least twice as much as every other number in the array. If it is, return the index of the largest element, or return -1 otherwise.

 

// Example 1:

// Input: nums = [3,6,1,0]
// Output: 1
// Explanation: 6 is the largest integer.
// For every other number in the array x, 6 is at least twice as big as x.
// The index of value 6 is 1, so we return 1.
// Example 2:

// Input: nums = [1,2,3,4]
// Output: -1
// Explanation: 4 is less than twice the value of 3, so we return -1.
 

// Constraints:

// 2 <= nums.length <= 50
// 0 <= nums[i] <= 100
// The largest element in nums is unique.

class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        pair<int, int> Second, First;
        int size = nums.size();

        if(nums[0] > nums[1]){
            First.first = 0;
            Second.first = 1;
            First.second = nums[0];
            Second.second = nums[1];

        } else {
            First.first = 1;
            Second.first = 0;
            First.second = nums[1];
            Second.second = nums[0];

        }
        if(size==2) return First.first;



        for(int i=2;i<nums.size();i++){
            if(nums[i]>First.second){
                Second.first = First.first;
                Second.second = First.second;
                First.first = i;
                First.second = nums[i];
            } 
            else if(nums[i]  > Second.second){
                Second.second = nums[i];
            }

        }

        if(Second.second*2 <= First.second){
            return First.first;
        }

        return -1;

    }
};