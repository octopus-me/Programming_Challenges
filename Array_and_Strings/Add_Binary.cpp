#include <bits/stdc++.h>

using namespace std;

// Given two binary strings a and b, return their sum as a binary string.

 

// Example 1:

// Input: a = "11", b = "1"
// Output: "100"
// Example 2:

// Input: a = "1010", b = "1011"
// Output: "10101"
 

// Constraints:

// 1 <= a.length, b.length <= 104
// a and b consist only of '0' or '1' characters.
// Each string does not contain leading zeros except for the zero itself.

class Solution {
    public:
        string addBinary(string a, string b) {
            int indexA = a.size() - 1, indexB = b.size() - 1;

            int carry = 0;

            string answer = "";

            while(indexA >= 0 || indexB >= 0 || carry != 0) {
                int sum = 0;
                if(indexA >= 0) {
                    sum += a[indexA--] - '0';


                }

                if (indexB >= 0) {
                    sum += b[indexB--] - '0';
                }

                sum += carry;
                answer += to_string(sum%2) ;
                carry = sum / 2;

            }
            reverse(answer.begin(), answer.end());
            return answer;

        }
};

int main(){
    Solution s;
    s.addBinary("10", "1");
    cout << s.addBinary("10", "1") << endl;
    return 0;
}