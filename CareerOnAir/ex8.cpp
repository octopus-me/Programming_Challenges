#include <bits/stdc++.h>

using namespace std;

class Solution{
    public:
    int trappingRainWater(vector<int> height){
        int left = 0, right = height.size() - 1;
        int leftMax = 0, rightMax = 0;
        int answer = 0;

        while(left < right){
            if(height[left] < height[right]){
                if(height[left] > leftMax){
                    leftMax = height[left];
                } else {
                    answer += leftMax - height[left];
                }
                left++;
            } else {
                if(height[right] > rightMax){
                    rightMax = height[right];
                } else {
                    answer += rightMax - height[right];
                }
                right--;
            }

        }

        return answer;

        
    }
};

int main(){
    Solution s;

    cout << s.trappingRainWater({2,0,3,1}) << endl;
    return 0;
}


