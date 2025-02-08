#include <bits/stdc++.h>

using namespace std;


// 415. Add Strings
// Solved
// Easy
// Topics
// Companies
// Given two non-negative integers, num1 and num2 represented as string, return the sum of num1 and num2 as a string.

// You must solve the problem without using any built-in library for handling large integers (such as BigInteger). You must also not convert the inputs to integers directly.

 

// Example 1:

// Input: num1 = "11", num2 = "123"
// Output: "134"
// Example 2:

// Input: num1 = "456", num2 = "77"
// Output: "533"
// Example 3:

// Input: num1 = "0", num2 = "0"
// Output: "0"
 

// Constraints:

// 1 <= num1.length, num2.length <= 104
// num1 and num2 consist of only digits.
// num1 and num2 don't have any leading zeros except for the zero itself.

class Solution {
public:
    string addStrings(string num1, string num2) {

        // SUM = num1[i] + num2[i] + carry
        int carry = 0;
        int i = 0;

        reverse(num1.begin(), num1.end());
        reverse(num2.begin(), num2.end());

        string answer = "";

        while(i < num1.length() || i < num2.length() || carry != 0){
            
            int v1 = 0, v2 = 0;

            if(i < num1.length()){
                v1 = num1[i] - '0';
            }

            if(i < num2.length()){
                v2 = num2[i] - '0';
            }

            int res = v1 + v2 + carry;

            
            string car = to_string(res%10);
            carry = (int) res / 10;

            answer += car;

            i++;
        }

        reverse(answer.begin(), answer.end());

        return answer;
        
    }
};