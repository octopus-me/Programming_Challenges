#include <bits/stdc++.h>

using namespace std;


/*
- For each row, there should be at most one character from 1 to 9
- For each column there should be at most one character from 1 to 9
- For each 9x9 box there should be at most one character from 1 to 9

I need a technique to find:
- Which row am I 
- Which column am I
- Which 9x9 box am I


For the row and column, is easy because index i and j keep track of this.

For the boxes:
The index i (representing the rows):
- i = 0,1,2 mean that we're on the left 3x3 box
- i = 3,4,5 mean we're on the middle
- i = 6,7,8 mean on the right

The index j (representing the columns)
- j = 0,1,2 mean we're at the top 3x3 box
- j = 3,4,5 mean we're at the middle
- j = 6,7,8 mean we're in the bottom

box_index = (i / 3) * 3 + j/3

*/

class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        vector<unordered_set<char>> row(9), col(9), box(9);

        for(int i=0;i<9;i++){
            for(int j=0;j<9;j++){
                char value = board[i][j];
                 if(value == '.') continue;

                int box_index = (i / 3) * 3 + j/3;

                if(row[i].count(value) || col[j].count(value) || box[box_index].count(box_index)){
                    return false;
                }

                row[i].insert(value);
                col[j].insert(value);
                box[box_index].insert(value);
            }
        }
        return true;
        
    }
};

int main(){

}