#include <bits/stdc++.h>

using namespace std;

// Given an m x n matrix mat, return an array of all the elements of the array in a diagonal order.

 

// Example 1:


// Input: mat = [[1,2,3],[4,5,6],[7,8,9]]
// Output: [1,2,4,7,5,3,6,8,9]
// Example 2:

// Input: mat = [[1,2],[3,4]]
// Output: [1,2,3,4]
 

// Constraints:

// m == mat.length
// n == mat[i].length
// 1 <= m, n <= 104
// 1 <= m * n <= 104
// -105 <= mat[i][j] <= 105

class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& mat) {
        
        int row = mat.size();
        int col = mat[0].size();

        vector<int> sol;


        for(int i=0;i<row+col-1;i++){
            int headRow;
            int headCol;
            if(i<col){
                headRow = 0;
                headCol = i;

            } else {
                headCol = col-1;
                headRow = i - col + 1;
            }
            
            vector<int> traverse;
            while(headRow<row && headCol >= 0){
                traverse.push_back(mat[headRow][headCol]);
                headRow++;
                headCol--; 
            }

            if(i%2){

                for(int k=0;k<traverse.size();k++){
                    sol.push_back(traverse[k]);

                    
                }

            } else {
                for(int k=traverse.size() - 1;k>=0;k--){
                    sol.push_back(traverse[k]);
                }

            }

            
        }
        return sol;
        
    }
};

int main(){
    Solution s;
    vector<vector<int>> mat = {{1,2,3},{4,5,6}};
    // 1 - 2 4 - 3 5 - 6 
    s.findDiagonalOrder(mat);
    return 0;
}