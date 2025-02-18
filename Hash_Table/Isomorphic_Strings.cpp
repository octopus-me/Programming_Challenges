#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    bool isIsomorphic(string s, string t) {

        if(s.length() != t.length()) return false;  


        unordered_map <char, char> hashmap;

        for(int i=0;i<s.length();i++){

            if(hashmap.find(hashmap[s[i]]) != hashmap.end()){
                if (hashmap[s[i]] != t[i]) return false;
            } else {
                hashmap[s[i]] = t[i];
            }
            


        }
        return true;
        
    }
};