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
        i++;         
        nthlevel(root->left,i,n,a);
        nthlevel(root->right,i,n,a);
    }
    void levelOrder(TreeNode* root,vector<vector<int>>&ans){
        int n=level(root);
        for(int i=0;i<=n;i++){
            vector<int>a;
            nthlevel(root,1,i,a);
            if(a.size()>0)ans.push_back(a);
            //cout<<endl;
        }
    }
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        levelOrder(root,ans);
        return ans;
    }
};