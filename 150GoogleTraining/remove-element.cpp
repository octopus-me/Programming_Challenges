#include <bits/stdc++.h>

using namespace std;

class Solution {
    public:
        int removeElement(vector<int>& nums, int val) {

            int left=0, right=nums.size() - 1;

            for(int i=0;i<nums.size();i++){
                if(nums[left] == val){
                    int aux = nums[right];
                    nums[right] = nums[left];
                    nums[left] = aux;
                    right--;
                } else {
                    left++;
                }
            }
            return left;
        }
    };