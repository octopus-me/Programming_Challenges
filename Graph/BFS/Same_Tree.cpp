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
        bool isSymmetric(TreeNode* root) {
            return this->is_symmetric(root->left, root->right);  
            
        }
    private:
        bool is_symmetric(TreeNode *left, TreeNode *right){
            if(!left && !right) return true;
            if(!left || !right) return false;
            return left->val == right->val && is_symmetric(left->left, right->right) && is_symmetric(left->right, right->left);
        }
    };



