#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_set <int> candidates;
        unordered_set <int> values;

        for(int i: nums){
            if(values.count(i) > 0){
                candidates.erase(i);
            } else {
                candidates.insert(i);
                values.insert(i);
            }
        }
        
        int r;

        for(int k: candidates) r =  k;
        
        return r;
        
    }
};