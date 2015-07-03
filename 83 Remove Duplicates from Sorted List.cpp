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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* p=head;
        ListNode* pnext;
        while(p!=NULL&&p->next!=NULL)
        {
            if(p->val==p->next->val)
            {
                pnext=p->next;
                p->next=pnext->next;
                free(pnext);
            }
            else
            {
                p=p->next;
            }
        }
        return head;
    }
};