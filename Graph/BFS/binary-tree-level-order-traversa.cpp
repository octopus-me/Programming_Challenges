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
        vector<vector<int>> levelOrder(TreeNode* root) {
            dfs(root, 1);
            
            return answer;
            
        }
        private:
        vector<vector<int>> answer;
    
        void dfs(TreeNode *root, int level){
            if(!root) return;

            int size = this->answer.size();

            if (level > size){
                vector<int> current;
                current.push_back(root->val);
                this->answer.push_back(current);
            } else {
                this->answer[level-1].push_back(root->val);
            }

            dfs(root->left, level + 1);
            dfs(root->right, level + 1);
        }
    
    };



// Essa é a solução do chat GPT

class Solution {
    public:
        vector<vector<int>> levelOrder(TreeNode* root) {
            vector<vector<int>> result;
            if (!root) return result;
    
            queue<TreeNode*> q;
            q.push(root);
    
            while (!q.empty()) {
                int levelSize = q.size(); // número de nós nesse nível
                vector<int> currentLevel;
    
                for (int i = 0; i < levelSize; ++i) {
                    TreeNode* node = q.front();
                    q.pop();
    
                    currentLevel.push_back(node->val);
    
                    if (node->left) q.push(node->left);
                    if (node->right) q.push(node->right);
                }
    
                result.push_back(currentLevel);
            }
    
            return result;
        }
    };
    