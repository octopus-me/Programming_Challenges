#include <bits/stdc++.h>

using namespace std;

// Write a function to find the longest common prefix string amongst an array of strings.

// If there is no common prefix, return an empty string "".

 

// Example 1:

// Input: strs = ["flower","flow","flight"]
// Output: "fl"
// Example 2:

// Input: strs = ["dog","racecar","car"]
// Output: ""
// Explanation: There is no common prefix among the input strings.
 

// Constraints:

// 1 <= strs.length <= 200
// 0 <= strs[i].length <= 200
// strs[i] consists of only lowercase English letters if it is non-empty.

class Solution {
public:
    string longestCommonPrefix(vector<string> strs) {
        // The girst string is a limiting string
        string s1 = strs[0];
        // I'll use a vector of size s1.lenght() all initialized at zero
        // For every string I will check whether or not strs[i][j] == s1[j]
        // If true, I'll incremente the vector at this index

        int size = s1.length();

        vector<int> strings;
        for(int i=0;i<size;i++){
            strings.push_back(0);
        }

        for(int i=1;i<strs.size();i++){
            string currentString = strs[i];

            for(int j=0;j<size && j<currentString.length();j++){
                if(currentString[j] == s1[j]){
                    strings[j]++;
                } else{
                    break;
                }
            }

        }

        int finalChar=0;

        for(int i: strings){
            if(i==strs.size()-1){
                finalChar++;
            }
        }

        return s1.substr(0,finalChar);

    }
};

int main(){
    Solution s;

    cout << s.longestCommonPrefix({{"abcdes","abdsdewe", "abcdvverve"}}) << endl;
    return 0;
}