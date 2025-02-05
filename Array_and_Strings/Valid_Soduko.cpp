#include <bits/stdc++.h>

using namespace std;

#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {


        for(int i=0;i<9;i++){
            bool b = valid_row(board, i);
            if(!b) return false;
            b = valid_column(board, i);
            if(!b) return false;

        }

        for(int i=0;i<9;i+=3){
            for(int j=0;j<9;j+=3){
                bool b = valid_box(board,i,j);
                if(!b) return false;
            }
        }

        return true;
    }

    bool valid_row(vector<vector<char>>& board, int row){
        int num[9] = {0,0,0,0,0,0,0,0,0};

        for(int i=0;i<9;i++){
            int aux = board[row][i] - '1';
            if(aux < 0) continue;
            if(aux >=9) continue;
            num[aux]++;
        }

        for(int k: num){
            if (k > 1) return false;
        }
        return true;
    }

    bool valid_column(vector<vector<char>>& board, int col){
        int num[9] = {0,0,0,0,0,0,0,0,0};

        for(int i=0;i<9;i++){
            int aux = board[i][col] - '1';
            if(aux < 0) continue;
            if(aux >=9) continue;
            num[aux]++;
        }

        for(int k: num){
            if (k > 1) return false;
        }
        return true;
    }

    bool valid_box(vector<vector<char>>& board, int i, int j){
        int num[9] = {0,0,0,0,0,0,0,0,0};

        for(int row = i; row < i + 3; row++){
            for(int col = j; col < j + 3; col ++){
                    
                int aux = board[row][col] - '1';

                if(aux < 0) continue;
                if(aux >=9) continue;
                num[aux]++;
            }
        }

        for(int k: num){
            if (k > 1) return false;
        }
        return true;
    }
};