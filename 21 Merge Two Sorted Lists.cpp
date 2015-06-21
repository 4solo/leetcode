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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode* L3=new ListNode (0);
        ListNode* head=L3;
        while(l1!=NULL&&l2!=NULL)
        {
            if(l1->val<l2->val)
            {
                ListNode* L4;
                L4=new ListNode (l1->val);
                L3->next=L4;
                L3=L3->next;
                l1=l1->next;
            }
            else
            {
                ListNode* L4;
                L4=new ListNode (l2->val);
                L3->next=L4;
                L3=L3->next;
                l2=l2->next;
            }
        }
        while(l1!=NULL)
        {
            ListNode* L4;
            L4=new ListNode (l1->val);
            L3->next=L4;
            L3=L3->next;
            l1=l1->next;
        }
        while(l2!=NULL)
        {
            ListNode* L4;
            L4=new ListNode (l2->val);
            L3->next=L4;
            L3=L3->next;
            l2=l2->next;
        }
        return head->next;
    }
};