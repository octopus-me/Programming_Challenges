#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> result;
        sort(nums.begin(), nums.end()); // Sort first to use two-pointer method

        for(int fixed = 0; fixed < nums.size() - 2; fixed++) {
            // Avoid duplicate fixed elements
            if (fixed > 0 && nums[fixed] == nums[fixed - 1]) continue;

            int left = fixed + 1, right = nums.size() - 1;

            while (left < right) {
                int sum = nums[fixed] + nums[left] + nums[right];

                if (sum == 0) {
                    result.push_back({nums[fixed], nums[left], nums[right]});

                    // Skip duplicate left elements
                    while (left < right && nums[left] == nums[left + 1]) left++;
                    // Skip duplicate right elements
                    while (left < right && nums[right] == nums[right - 1]) right--;

                    left++;
                    right--;
                } else if (sum < 0) {
                    left++;
                } else {
                    right--;
                }
            }
        }
        return result;
    }
};


int main(){
    Solution s;


    for(vector<int> a: s.threeSum({-1,0,1,2,-1,-4})){
        for(int j: a){
            cout << j << " ";
        }
        cout << endl;
    }

    return 0;
}