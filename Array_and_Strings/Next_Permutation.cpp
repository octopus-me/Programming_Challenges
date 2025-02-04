#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int i = nums.size() - 2;

        // Look for the pivot
        while(i >= 0 && nums[i] >= nums[i+1]){
            i--;
        }

        int j = nums.size() - 1;
        if(i >= 0){

            // Now search for the successor
            while(j>=0 && nums[i] >= nums[j]){
                j--;
            }

            swap(nums[i],nums[j]);

        }

        reverse(nums.begin()+i+1, nums.end());
        
    }
};

int main(){
    Solution s;
    vector<int> num = {1,5,1};
    s.nextPermutation(num);
    for(int i: num){
        cout << i << " ";
    }
    cout << endl;
    return 0;
}