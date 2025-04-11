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
        vector<vector<int>> levelOrderBottom(TreeNode* root) {
            bfs(root);
            return this->answer;
        }
    private:
        vector<vector<int>> answer;

        void bfs(TreeNode * root){
            if(!root) return;
            queue <TreeNode*> q;

            stack <vector<int>> s;

            q.push(root);

            while(!q.empty()){
                int size = q.size();

                vector<int> current;

                while(size-- > 0){

                    TreeNode *node = q.front();
                    q.pop();

                    current.push_back(node->val);

                    if(node->left) q.push(node->left);
                    if(node->right) q.push(node->right);                                     

                }

                s.push(current);
            }

            while(!s.empty()){
                vector<int> current = s.top();
                s.pop();

                answer.push_back(current);
            }
        }
    };