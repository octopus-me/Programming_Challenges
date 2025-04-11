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

    //       1
    //     /   \
    //    2     3
    //   / \    / \
    //  4   5  -6   -7

    // -7
    // -4  -2

class Solution {
    public:
        int maxPathSum(TreeNode* root) {
            this->dfs(root);
            return this->max_sum;
            
        }
    private:
        int max_sum = INT_MIN;
        int dfs(TreeNode* root) {
            if(!root){
                return  0;
            }

            int left = max(0, dfs(root->left));
            int right = max(0, dfs(root->right));

            max_sum = max(max_sum, left + right + root->val);

            return max(right , left ) + root->val ;
            
        }
    };



int main(){
    return 0;
}