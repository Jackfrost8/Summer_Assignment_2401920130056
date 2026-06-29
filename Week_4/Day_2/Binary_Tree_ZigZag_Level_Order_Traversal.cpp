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
    int level(TreeNode* root){
        if(root==NULL) return 0;
        return 1+max(level(root->left),level(root->right));
    }

    void nthlevel(TreeNode* root,int i,int n,vector<int>&a){
        if(root==NULL) return;
        if(i==n) {
            a.push_back(root->val);
            return;
        }                 
        nthlevel(root->left,i+1,n,a);
        nthlevel(root->right,i+1,n,a);       
    }

    void nthlevelReverse(TreeNode* root,int i,int n,vector<int>&a){
        if(root==NULL) return;
        if(i==n) {
            a.push_back(root->val);
            return;
        }
 
        nthlevelReverse(root->right,i+1,n,a);
        nthlevelReverse(root->left,i+1,n,a);
    }

    void levelOrder(TreeNode* root,vector<vector<int>>&ans){
        int n=level(root);
        for(int i=1;i<=n;i++){
            vector<int>a;
            if(i%2==1)nthlevel(root,1,i,a);
            else nthlevelReverse(root,1,i,a);
            if(a.size()>0)ans.push_back(a);
        }
    }
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        levelOrder(root,ans);
        return ans;
    }
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        levelOrder(root,ans);
        cout<<level(root);
        return ans;
    }
};