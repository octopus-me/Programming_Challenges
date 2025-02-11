#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int jump(vector<int>& nums) {
        int jumps; // Variable to hold the number of jumps
        int fartherst = 0; //Variable that holds the fartherst you can go from one jump;
        int current_end = 0; // Variable that represents the current end from the current jump

        // I'll have to think about:
        // What is the fartherst I can go from one jump?
        // When to update the number of jumps?
        for(int i=0;i<nums.size();i++){
            fartherst = max(fartherst, i+nums[i]);

            if(i==current_end){ // That means I need to do another jump
                jumps++;
                current_end = fartherst;
            }
        }

        return jumps;


    }

};