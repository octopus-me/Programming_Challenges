#include <bits/stdc++.h>

using namespace std;

class Solution{
    public:
    int binarySubArraySum(vector<int> nums, int N){
        vector<int> prefixSum(nums.size()+1,0);
        for(int i=0;i<nums.size();i++){
            prefixSum[i+1] = prefixSum[i] + nums[i];
        }

        unordered_map<int, int> count;

        int answer = 0;

        for(int i: prefixSum){
            if(count.find(i) != count.end()){
                answer += count[i];
            } 

            if(count.find(i+N) != count.end()){
                count[i+N]++;

            } else {
                count[i+N] = 1;
            }
            
        }
        return answer;        

    }

};

int main(){
    Solution s;
    
    cout << s.binarySubArraySum({1,1,0,0,1}, 2) << endl;

    return 0;
}
