#include <bits/stdc++.h>
#include "algorithm"

using namespace std;

// Given a binary array nums, return the maximum number of consecutive 1's in the array.

 

// Example 1:

// Input: nums = [1,1,0,1,1,1]
// Output: 3
// Explanation: The first two digits or the last three digits are consecutive 1s. The maximum number of consecutive 1s is 3.
// Example 2:

// Input: nums = [1,0,1,1,0,1]
// Output: 2
 

// Constraints:

// 1 <= nums.length <= 105
// nums[i] is either 0 or 1.

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {

        int max = 0;

        int consec = 0;

        for(int i: nums){
            if(i == 1){
                consec ++;
            } else {
                if(consec > max) max = consec;
                consec = 0;
            }
        }

        return (max > consec) ? max : consec;
    }
};