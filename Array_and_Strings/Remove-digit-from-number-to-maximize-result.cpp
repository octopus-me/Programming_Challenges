
#include <bits/stdc++.h>

using namespace std;

// You are given a string number representing a positive integer and a character digit.

// Return the resulting string after removing exactly one occurrence of digit from number such that the value of the resulting string in decimal form is maximized. The test cases are generated such that digit occurs at least once in number.

 

// Example 1:

// Input: number = "123", digit = "3"
// Output: "12"
// Explanation: There is only one '3' in "123". After removing '3', the result is "12".
// Example 2:

// Input: number = "1231", digit = "1"
// Output: "231"
// Explanation: We can remove the first '1' to get "231" or remove the second '1' to get "123".
// Since 231 > 123, we return "231".
// Example 3:

// Input: number = "551", digit = "5"
// Output: "51"
// Explanation: We can remove either the first or second '5' from "551".
// Both result in the string "51".
 

// Constraints:

// 2 <= number.length <= 100
// number consists of digits from '1' to '9'.
// digit is a digit from '1' to '9'.
// digit occurs at least once in number.

class Solution2 {
public:
    string removeDigit(string number, char digit) {

        string ans = "";
        int index = -1;

        for(int i=0;i<number.size();i++){
            if(number[i] == digit){
                if(i < number.size() - 1){
                    if(number[i] < number[i+1]){
                        index  = i;
                        break;                        
                    }
                    index = i;
                }

                if(i == number.size() -1){
                    index = i;
                    break;
                }
            } 
        }

        for(int i =0;i<number.size();i++){
            if(i != index){
                ans += number[i];
            }
        }
        return ans;
        
    }
};

class Solution {
public:
    string removeDigit(string number, char digit) {
        string ans = "";

        reverse(number.begin(), number.end());

        int index = -1;

        for(int i=0;i<number.size();i++){
            if(number[i] == digit){
                if(i > 0){
                    if(number[i-1] > number[i]){
                        index = i;
                    }

                    if(index == -1) index = i;

                } else{
                    index = i;
                }
                
            }
        }

        for(int i=0;i<number.size();i++){
            if(i != index){
                cout << number[i] << endl;
                cout <<"ANS: " << ans << endl;
                ans += number[i];
            }
        }

        reverse(ans.begin() , ans.end());
        return ans;
        
    }
};

int main(){

    return 0;
}