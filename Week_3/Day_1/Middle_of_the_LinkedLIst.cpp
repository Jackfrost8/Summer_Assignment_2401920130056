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
    ListNode* middleNode(ListNode* head) {
        if(head->next==NULL)return head;
        else if(head->next->next==NULL)return head->next;
        ListNode* slow=head;
        ListNode* fast=head;
        while(fast!=NULL){
            fast=fast->next->next;
            slow=slow->next;
            if(fast==NULL) break;
            else if(fast->next==NULL){
                //slow=slow->next;
                break;
            }
        }
        return slow;
    }
};