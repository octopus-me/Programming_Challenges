#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    double findMedianSortedArrays(vector<int> nums1, vector<int> nums2) {
        int n = nums1.size(), m = nums2.size();

        int size = n + m;

        n=0, m=0;

        vector<int> result;
        for(int i=0;i<size;i++){
            if(n >= nums1.size()){
                result.push_back(nums2[m]);
                m++;
                continue;

            }

            if(m >= nums2.size()){
                result.push_back(nums1[n]);
                n++;
                continue;
            }

            if(nums1[n] > nums2[m]){
                result.push_back(nums2[m]);
                m++;

            }

            if(nums1[n] < nums2[m]){
                result.push_back(nums1[n]);
                n++;
            }
        }

        if(size%2){
            return result[size/2];
        }
        else {
            return (result[size/2] + result[size/2-1]) /2.0;
        }
 
    }
};

int main(){
    Solution s;
    cout << s.findMedianSortedArrays({},{1,2}) << endl;
}