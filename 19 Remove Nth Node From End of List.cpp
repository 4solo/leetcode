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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* it=head;
        int step=0;
        while(step<n&&it!=NULL)
        {
            it=it->next;
            step++;
        }
        ListNode* ha=head;
        if(step==n&&it==NULL)
        {
            return head->next;
        }
        while(it->next!=NULL)
        {
            ha=ha->next;
            it=it->next;
        }
        if(ha->next!=NULL)
            {
                ha->next=ha->next->next;
            }
        return head;
    }
};