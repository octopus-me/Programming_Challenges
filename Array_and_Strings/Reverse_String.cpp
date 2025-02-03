
#include <bits/stdc++.h>

using namespace std;

// Write a function that reverses a string. The input string is given as an array of characters s.

// You must do this by modifying the input array in-place with O(1) extra memory.

 

// Example 1:

// Input: s = ["h","e","l","l","o"]
// Output: ["o","l","l","e","h"]
// Example 2:

// Input: s = ["H","a","n","n","a","h"]
// Output: ["h","a","n","n","a","H"]
 

// Constraints:

// 1 <= s.length <= 105
// s[i] is a printable ascii character.

class Solution {
public:
    void reverseString(vector<char>& s) {
        int size = s.size();

        int pointer1 = 0, pointer2 = size -1;

        while(pointer1 < pointer2){
            char c = s[pointer2];
            s[pointer2] = s[pointer1];
            s[pointer1] = c;
            pointer1++;
            pointer2--;

        }

    }
};

int main(){
    vector<char> s = {'a'};

    Solution sol;
    sol.reverseString(s);

    return 0;

}