#include <bits/stdc++.h>

using namespace std;


class Solution {
public:
    vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
        
        // I'll need a data structure to hold <string, <index in list1, index in list 2>>

        unordered_map <string, pair<int,int>> hashmap;


        // Find the intersection of those two lists
        unordered_map <string, int> hashmap_aux;
        for(int i=0; i < list1.size();i++){
            hashmap_aux[list1[i]] = i;
        }

        for(int i=0;i<list2.size();i++){
            if(hashmap_aux.find(list2[i]) != hashmap_aux.end()){
                hashmap[list2[i]] = {hashmap_aux[list2[i]], i};
            }


        }

        int first = 1;
        int min;
        string res;
        vector<string> common_string;

        for(auto k: hashmap){
            int sum = k.second.first + k.second.second;

            if(first){
                first = 0;
                min = sum;
                res = k.first;
                common_string.push_back(res);

            } else {
                if( sum < min) {
                    min = sum;
                    res = k.first;
                    common_string = {};
                    common_string.push_back(res);

                } else if(sum == min){
                    res = k.first;
                    common_string.push_back(res);
                }
            }
          
        }
        return common_string;
        
    }
};