/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 *
 */
class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        //no node
        if(head==NULL||head->next==NULL)
        {
            return head;
        }
        ListNode *newhead=head->next;
        ListNode *c=head->next->next;
        newhead->next=head;
        head->next=c;
        ListNode *a=head;
        ListNode *b=c;
        if(c!=NULL)
        {
            c=c->next;
        }
        else
        {
            return newhead;
        }
        while(b!=NULL&&c!=NULL)
        {
            a->next=c;
            b->next=c->next;
            c->next=b;
            a=b;
            if(a->next!=NULL)
            {
                b=a->next;
            }
            else
            {
                break;
            }
            if(b->next!=NULL)
            {
                c=b->next;
            }
            else
            {
                break;
            }
        }
        return newhead;
    }
};