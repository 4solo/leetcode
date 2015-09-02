/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        if(head==NULL||head->next==NULL)
            return NULL;
        ListNode* first=head->next;
        if(first->next==NULL) return NULL;
        ListNode* second=first->next;
        while(first!=second)
        {
            first=first->next;
            if(second->next==NULL) return NULL;
            second=second->next;
            if(second->next==NULL) return NULL;
            second=second->next;
        }
        second=head;
        while(first!=second)
        {
            second=second->next;
            first=first->next;
        }
        return second;
        
    }
};