#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int strStr(string haystack, string needle) {

        int pointer = 0;
        int begin = -1;

        for(int i=0;i<haystack.length();i++){
            if(haystack[i] == needle[pointer]){
                if(pointer==0) begin = i;
                pointer++;
            } else {
                if(pointer > 0){
                    i = begin;
                }
                begin = -1;
                pointer = 0;
            }

            if(pointer == needle.length()){
                return begin;
            }
        }
        return -1;
    }
};

int main(){
    Solution s;
    cout << s.strStr("mississippi", "issip") << endl;
    return 0;
}