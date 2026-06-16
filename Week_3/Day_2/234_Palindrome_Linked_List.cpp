/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    bool isPalindrome(ListNode* head) {
        vector<int> ans;
        if(head==NULL)return false;
        if(head->next==NULL)return true;
        while(head!=NULL){
            ans.push_back(head->val);
            head=head->next;
        }
        int n=ans.size();
        bool flag=true;
        for(int i=0;i<=(n-1)/2;i++){
            if(ans[i]!=ans[n-1-i])return false;
        }
        return true;
    }
};