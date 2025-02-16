#include <bits/stdc++.h>


using namespace std;

class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        // 3 2 1
        // 1 2 3

        // 4 2 5 3 1
        // 4 3 5 2 1
        // 4 3 1 2 5

        int first_non_increasing = -1;

        for(int i=nums.size() - 2;i>= 0;i--)
        {
            if(nums[i] < nums[i+1]) {
                first_non_increasing= i;
                break;                
            }
        }

        if(first_non_increasing >= 0){


            int first_larger_value;

            for(int i=nums.size() - 1;i>= 0;i--)
            {
                if(nums[i] > nums[first_non_increasing]){
                    first_larger_value = i;
                    break;
                }
            }

            cout << first_larger_value << endl;



            swap(nums[first_larger_value], nums[first_non_increasing]);
            int ini = first_non_increasing+1, end = nums.size() - 1;

            while(ini < end){
                swap(nums[ini], nums[end]);
                ini++;
                end--;
            }

        } else {
            int ini = 0, end = nums.size() - 1;
            while(ini < end){
                swap(nums[ini], nums[end]);
                ini++;
                end--;
            }
        }
        

    }
};

int main(){

    vector<int> v = {1,2,3};
    Solution s;
    s.nextPermutation(v);

    for(int i: v) cout << i << " ";
    cout << "\n";
    return 0;
}