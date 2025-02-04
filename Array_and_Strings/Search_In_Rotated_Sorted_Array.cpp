#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int search(vector<int> nums, int target) {

        int low = 0, high = nums.size()-1;

        while(low <= high) {
            int mid = low + (high - low) / 2;

            if(nums[mid] == target ) {
                return mid;
            } 
            
            if (nums[mid] >= nums[low]){

                if(nums[low] <= target && nums[mid] > target ){
                    high = mid - 1;

                } else {
                    low = mid + 1;

                }
            } else {

                if(nums[high] >= target && nums[mid] < target){
                    low = mid + 1;

                } else {
                    high = mid - 1;
                }
            }
        } 
        return -1;
        
    }
};

int main(){
    Solution s;
    cout << s.search({3,1},1) << endl;

    return 0;
}