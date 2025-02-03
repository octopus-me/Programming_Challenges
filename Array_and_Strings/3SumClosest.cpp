#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int threeSumClosest(vector<int> nums, int target) {
        // Sort the vector

        // Fix the first element
        // Using two pointer, look for a combination of tree elementes that sum is closest to target

        // Repeat that for the second, and others elements


        // To move the pointes, I'll need to check if:
        // sum > target -> move the right pointer to the left
        // sum < targer -> move the left pointer to the right;


        sort(nums.begin(), nums.end());

        int min_diff;

        int flag=1;

        int value;

        int fixed = 0;

        while(fixed < nums.size() - 2){
            int left = fixed+1, right = nums.size()-1;

            while(left < right){
                int diff = abs(nums[fixed] + nums[left] + nums[right] - target);

                if(flag){
                    flag=0;
                    min_diff = diff;
                    value = nums[fixed] + nums[left] + nums[right];
                }

                else if(diff<min_diff) {
                    min_diff = diff;
                    value = nums[fixed] + nums[left] + nums[right];
                }

                if(nums[fixed] + nums[left] + nums[right]>target){
                    right--;
                } else if(nums[fixed] + nums[left] + nums[right] < target){
                    left++;
                } else{
                    return target;
                }
                
            }
            fixed++;
        }
        return value;
        
    }
};

int main(){
    Solution s;
    cout << s.threeSumClosest({0,0,0},1000) << endl;
}