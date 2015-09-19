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
    ListNode* reverseKGroup(ListNode* head, int k) {
        int newk=k;
        ListNode* current=head;
        ListNode* temp;
        if(head==NULL) return head;
        while(current&&newk>0)
        {
            current=current->next;
            newk--;
        }
        if(newk>0)
        {
            return head;
        }
        else
        {
            ListNode* prev=reverseKGroup(current,k);
            while(head&&k)
            {
                temp=head;
                head=head->next;
                temp->next=prev;
                prev=temp;
                k--;
            }
            return prev;
        }
        
    }
};