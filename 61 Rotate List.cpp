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
    ListNode* rotateRight(ListNode* head, int k) {
        if(k==0||head==NULL)
        {
            return head;
        }
        ListNode* first=head;
        ListNode* second=head;
        int count=1;
        while(first->next!=NULL)
        {
            first=first->next;
            count++;
        }
        if(k%count==0)
            return head;
        else
            k=k%count;
        first=head;
        while(k>0)
        {
            if(second->next!=NULL)
            {
                second=second->next;
            }
            k--;
        }
        while(second->next!=NULL)
        {
            first=first->next;
            second=second->next;
        }
        ListNode *newhead=first->next;
        second->next=head;
        first->next=NULL;
        return newhead;
    }
};