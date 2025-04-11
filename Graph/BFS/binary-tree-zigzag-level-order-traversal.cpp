#include <bits/stdc++.h>

using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution {
    public:
        vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
            bfs(root);
            return answer;            
        }
    private:
        vector<vector<int>> answer;

        void bfs(TreeNode *root){
            queue <TreeNode*> q;

            q.push(root);

            int leftToRight = 0;

            while(!q.empty()){

                vector<int> current;

                int size = q.size();

                for(int i=0; i<size;i++){
                    TreeNode *c = q.front();
                    q.pop();
                    
                    if(!c->left) q.push(c->left);
                    if(!c->right) q.push(c->right);
                    
                    current.push_back(c->val);

                }

                if(leftToRight) {
                    leftToRight = 0;
                    reverse(current.begin(), current.end());
                }
                else {
                    leftToRight = 1;
                }

                answer.push_back(current);
            }
        }
    };