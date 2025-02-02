#include <bits/stdc++.h>

using namespace std;

// Given two binary strings a and b, return their sum as a binary string.

 

// Example 1:

// Input: a = "11", b = "1"
// Output: "100"
// Example 2:

// Input: a = "1010", b = "1011"
// Output: "10101"
 

// Constraints:

// 1 <= a.length, b.length <= 104
// a and b consist only of '0' or '1' characters.
// Each string does not contain leading zeros except for the zero itself.

class Solution {
public:
    int maxArea(vector<int>& height) {
        int left = 0, right = height.size() -1;

        int area = 0;

        while(left < right){

            int current_area ;

            if(height[right] > height[left]){
                current_area = (right-left)*height[left];
                left++;

            } else {
                current_area = (right-left)*height[right];
                right--;

            }

            if(current_area > area) area = current_area;

        }
        return area;
    }
};

int main(){
    Solution s;
    s.addBinary("10", "1");
    cout << s.addBinary("10", "1") << endl;
    return 0;
}