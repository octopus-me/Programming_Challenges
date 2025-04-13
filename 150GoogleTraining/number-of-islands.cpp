#include <bits/stdc++.h>


using namespace std;


class Solution {
    public:
        int numIslands(vector<vector<char>>& grid) {
    
            number_of_islands = 0;
    
            this->grid = grid;
    
            for(int i=0;i< this->grid.size();i++){
                for(int j=0;j < this->grid[0].size();j++){
                    if(this->grid[i][j] == '1'){
                        number_of_islands++;
                        visitIsland(i,j);
                    }
                }
            }
            return number_of_islands;
            
        }
    private:
        vector<vector<char>> grid;
        int number_of_islands;
        void visitIsland(int i, int j){
            grid[i][j] = '0';
    
            if(i+1 < grid.size() && grid[i+1][j] == '1'){
                visitIsland(i+1,j);
            }
    
            if(i-1 >= 0 && grid[i-1][j] == '1'){
                visitIsland(i-1,j);
    
            }
    
            if(j+1 < grid[0].size() && grid[i][j+1] == '1'){
                visitIsland(i,j+1);
    
            }
    
            if(j-1 >= 0 && grid[i][j-1] == '1'){
                visitIsland(i,j-1);
            }
    
    
    
        }
    
    };