/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    void inverter(TreeNode* root){
        if(root==NULL) return;
        // TreeNode* temp1=root->left;
        // TreeNode* temp2=root->right;
        // root->left=temp2;
        // root->right=temp1;
        swap(root->left,root->right);
        inverter(root->left);
        inverter(root->right);
        return;
    }
    TreeNode* invertTree(TreeNode* root) {
        inverter(root);
        return root;
    }
};