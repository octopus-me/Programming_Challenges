#include <bits/stdc++.h>

using namespace std;

// Target = 0
// [4,5,6,7,0,1,2]

// 

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int left=0, right=nums.size()-1;

        while(left <= right){
            int mid = (left + right) / 2;

            if(nums[mid] == target) return mid;

            if(nums[left] < nums[mid]){
                if(nums[left] <= target && nums[mid] > target){
                    right = mid - 1;
                } else {
                    left = mid + 1;
                }
            } else {
                if(nums[right] >= target && nums[mid] < target){
                    left = mid + 1;
                } else {
                    right = mid - 1;
                }
            }

        }

        return - 1;
        
    }
};

int main(){
    vector<int> arr = {3,1};
    Solution s;
    int i = s.search(arr, 1);
    cout << i << endl;
    return 0;
}