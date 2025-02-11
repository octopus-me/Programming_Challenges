#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int trap(vector<int> height) {

        vector<int> minMax;
        for(int i=0;i<height.size();i++){
            int l = 0, r = 0;
            int min;

            for(int j=i-1; j>=0;j--){
                if(height[j] > l) l = height[j];                
            }
            for(int j=i+1;j<height.size();j++){
                if(height[j] > r) r = height[j];
            }

            if(l > r) min = r;
            else min = l;

            if ( min - height[i] <= 0) minMax.push_back(0);
            else minMax.push_back(min - height[i]);
        }

        int vol = 0;
        for(int i : minMax){
            vol += i;

        }

        return vol;
    }
};


class Solution {
public:
    int trap(vector<int>& height) {
        int left=0, right = height.size() - 1;
        int volume = 0;
        int max_left = height[left], max_right = height[right];

        while(left < right){
            if(height[left] > height[right]){
                if(height[right] <= max_right){
                    volume = volume + max_right - height[right];

                } else {
                    max_right = height[right];
                }
                right--;

            } else {
                if(height[left] <= max_left){
                    volume = volume + max_left - height[left];

                } else {
                    max_left = height[left];
                }
                left++;

            } 

        }
        return volume;
    }
};

int main(){

    Solution1 s;

    s.trap({4,2,0,3,2,5});


    return 0;

}