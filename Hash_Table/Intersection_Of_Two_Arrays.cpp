
#include <bits/stdc++.h>

using namespace std;


class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {

        unordered_set <int> hashset;
        unordered_set <int> intersection;

        for(int i: nums1) {
            hashset.insert(i);
        }

        vector<int> result;

        for(int i: nums2){
            if(hashset.count(i) > 0) intersection.insert(i);
        }

        for(int i: intersection) result.push_back(i);
        
        return result;
    }
};