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
    void helper(TreeNode* p, TreeNode* q, bool & flag){
        if(p==NULL && q==NULL) return;
        else if(p==NULL || q==NULL) {
            flag=false;
            return;
        }

        else if(p->val!=q->val) {
            flag=false;
            return;
        }
        helper(p->left,q->left,flag);
        helper(p->right,q->right,flag);
    }
    bool isSameTree(TreeNode* p, TreeNode* q) {
        bool flag=true;
        helper(p,q,flag);
        return flag;
    }
};