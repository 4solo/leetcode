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
    ListNode* removeElements(ListNode* head, int val) {
        if(head==NULL)
        {
            return head;
        }
        ListNode* newhead;
        while(head->val==val)
        {
            ListNode* ha;
            ha=head;
            if(head->next!=NULL)
            {
                head=head->next;
            }
            else
            {
                return NULL;
            }
            delete ha;
        }
        newhead=head;
        while(head->next!=NULL)
            {
                if(head->next->val!=val)
                {
                    head=head->next;
                }
                else
                {
                    ListNode* here;
                    here=head->next;
                    head->next=here->next;
                    delete here;
                }
            }
        return newhead;
    }
};