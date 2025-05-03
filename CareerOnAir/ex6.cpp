#include <bits/stdc++.h>

using namespace std;

class Solution{
    public:
        int findMissingInteger(vector<int> nums){
            int size = nums.size();
            vector<bool> aux(size+1, false);

            for(int i: nums){
                if(i>0 && i<=size){
                    aux[i-1] = true;
                }
            }

            for(int i=0;i<=size;i++){
                if(!aux[i]) return i+1;
            }

            return -1;
        }
};

int main(){
    Solution s;

    cout << s.findMissingInteger({}) << endl;
    return 0;
}

