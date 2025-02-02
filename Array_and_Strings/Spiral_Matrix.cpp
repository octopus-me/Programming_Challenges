#include <bits/stdc++.h>

using namespace std;

// Given an m x n matrix, return all elements of the matrix in spiral order.

 

// Example 1:


// Input: matrix = [[1,2,3],[4,5,6],[7,8,9]]
// Output: [1,2,3,6,9,8,7,4,5]
// Example 2:


// Input: matrix = [[1,2,3,4],[5,6,7,8],[9,10,11,12]]
// Output: [1,2,3,4,8,12,11,10,9,5,6,7]
 

// Constraints:

// m == matrix.length
// n == matrix[i].length
// 1 <= m, n <= 10
// -100 <= matrix[i][j] <= 100

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> solution;

        int top = 0, left = 0;
        int right = matrix[0].size()-1;
        int down = matrix.size()-1;
        while(top <= down && right >= left){

            // From left to right
            for(int i=left;i<=right;i++){
                solution.push_back(matrix[top][i]);
            }
            top++;

            // From up to down
            for(int i=top; i<=down;i++ ){
                solution.push_back(matrix[i][right]);
            }
            right--;

            // From right to left
            if(top <= down){
                for(int i=right;i>=left;i--){
                    solution.push_back(matrix[down][i]);
                }
                down--;
            }

            

            // From down to top
            if(right >= left){
                for(int i=down;i>=top;i--){
                    solution.push_back(matrix[i][left]);
                }
                left++;
            }
        }
        return solution;

        
    }
};

int main(){
    Solution s;
    vector<vector<int>> matrix = {{1,2,3},{4,5,6},{7,8,9},{10,11,12}};
    s.spiralOrder(matrix);
    return 0;
}