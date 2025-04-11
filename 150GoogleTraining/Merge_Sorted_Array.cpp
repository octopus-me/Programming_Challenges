#include <bits/stdc++.h>

using namespace std;

class Solution {
    public:
        void merge(vector<int>& nums1, int m, vector<int> &nums2, int n) {
            int i = m + n - 1;
            m--; // Último índice de elementos válidos
            n--; // Último índice de nums2
    
            while (n >= 0) {
                if (m >= 0 && nums1[m] > nums2[n]) {
                    nums1[i--] = nums1[m--];
                } else {
                    nums1[i--] = nums2[n--];
                }
            }
        }
    };
    



int main(){
    Solution s;

    s.merge({1,2,2,3,4}, 5, {2,3,4,4}, 4);
    return 0;
}