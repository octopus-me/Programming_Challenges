#include <iostream>

using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};


int main(){

    TreeNode *root = new TreeNode(4);

    root->left = new TreeNode(2);
    root->left->left = new TreeNode(3);

    TreeNode *it = root;
    while(it != nullptr){
        cout << it->val << endl;
        it = it->left;
        
    }

    return 0;
}