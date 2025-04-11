#include <bits/stdc++.h>

using namespace std;

class Solution {
    public:
        void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
            int i = m + n - 1;
            n--;
            m--;

            while(n >=0){
                if(m>=0){
                    if(nums1[m] >= nums2[n]){
                        
                        nums1[i] = nums1[m];
                        m--;

                    } else {
                        
                        nums1[i] = nums2[n];
                        n--;
                    }
                } else {
                    nums1[i] = nums2[n];
                    n--;
                }
                i--;
            }
        }
    };