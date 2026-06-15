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
    ListNode* reverseList(ListNode* head) {
        ListNode* nn=head;
        //if(head!=NULL)nn=head->next;
        ListNode* n=NULL;
        ListNode* temp;
        while(nn!=NULL){
            temp=n;
            n=nn;
            nn=nn->next;
            n->next=temp;
        }
        return n;
    }
};