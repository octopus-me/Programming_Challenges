#include <bits/stdc++.h>

using namespace std;

class Solution {
    public:
        int removeDuplicates(vector<int>& nums) {
            int size = nums.size();

            if(size == 1 || size == 2) return size;

            int k = 2;

            for(int j=k; j<size;j++){
                if(nums[k] == nums[k-2]){
                    int i=k;

                    for(int i=k;i<size - 1;i++){
                        nums[i] = nums[i+1];
                    }
                } else {
                    k++;
                }
            }
            return k;
            
        }
    };