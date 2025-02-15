#include <bits/stdc++.h>

using namespace std;

class Solution{
    public:
        vector<int> twosum(vector <int> arr, int target){
            unordered_map<int, int> hashmap;

            

            for (int i=0;i< (int) arr.size();i++){
                hashmap[arr[i] - target] = i;
            }

            for(int i=0;i<(int)arr.size();i++){
                if(hashmap.find((-1) * arr[i]) != hashmap.end() && hashmap[(-1) * arr[i]] != i){
                    return {i, hashmap[(-1) * arr[i]]};
                }
            }

            return {};



        }

        

};


int main(){

    vector<int> arr = { 1 , 2, 3 ,4 ,5 ,7 , 9, 11};

    Solution s;

    vector<int> res = s.twosum(arr, 5);

    for(int i: res) cout << i << endl;
    return 0;
}