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
        int maxDepth(TreeNode* root) {
            this->max_depth = 0;
            bfs(root);
            return this->max_depth;
            
        }
    private:
        int max_depth;
        void bfs(TreeNode *root){
            if(!root) return;
            queue <TreeNode*> q;

            q.push(root);

            while( !q.empty()){
                max_depth += 1;

                int size = q.size();

                while(size > 0){
                    size--;

                    TreeNode *node = q.front();
                    q.pop();

                    if(node->left) q.push(node->left);
                    if(node->right) q.push(node->right);
                }
            }
        }
    };
