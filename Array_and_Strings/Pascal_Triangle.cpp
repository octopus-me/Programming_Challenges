#include <bits/stdc++.h>

using namespace std;

// Given an integer numRows, return the first numRows of Pascal's triangle.

// In Pascal's triangle, each number is the sum of the two numbers directly above it as shown:


 

// Example 1:

// Input: numRows = 5
// Output: [[1],[1,1],[1,2,1],[1,3,3,1],[1,4,6,4,1]]
// Example 2:

// Input: numRows = 1
// Output: [[1]]
 

// Constraints:

// 1 <= numRows <= 30

class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> pascal;

        pascal.push_back({1});

        // For loop to push bach all the other vector
        for(int i=1;i<numRows;i++){
            // The current vector
            vector<int> current;
            // The currenct vector has 1 more element than the previous
            for(int j=0;j<i+1;j++){
                // The firs element to the current vector is equal the first elemento of the previous vector
                if(j==0) current.push_back(pascal[i-1][0]);
                // The last element of the current vector is equal to the last element of the previous vector
                if(j==i) current.push_back(pascal[i-1][i-1]);

                // The middle element at index j in the current vector is equal the element at index j-1 plus element at index j of the previous vector
                if(j>0 && j<i){
                    current.push_back(pascal[i-1][j-1] + pascal[i-1][j] );

                }
            }
            pascal.push_back(current);


        }
        return pascal;
        
    }
};

int main(){
    Solution s;
    s.generate(5);
    return 0;
}