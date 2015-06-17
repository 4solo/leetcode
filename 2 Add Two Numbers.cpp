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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int carry=0;
        int sum;
        ListNode* L3=new ListNode(0);
        ListNode* it3=L3;
        while(l1&&l2)
        {
            sum=(l1->val+l2->val+carry)%10;
            if(l1->val+l2->val+carry>=10)
            {
                carry=1;
            }
            else
                carry=0;
            ListNode* L4=new ListNode(sum);
            L3->next=L4;
            L3=L3->next;
            l1=l1->next;
            l2=l2->next;
        }
        while(l1)
        {
            sum=(l1->val+carry)%10;
            if(l1->val+carry>=10)
            {
                carry=1;
            }
            else
                carry=0;
            ListNode* L4=new ListNode(sum);
            L3->next=L4;
            L3=L3->next;
            l1=l1->next;
        }
        while(l2)
        {
            sum=(l2->val+carry)%10;
            if(l2->val+carry>=10)
            {
                carry=1;
            }
            else
                carry=0;
            ListNode* L4=new ListNode(sum);
            L3->next=L4;
            L3=L3->next;
            l2=l2->next;
        }
        if(carry>0)
        {
           ListNode* L4=new ListNode(carry);
            L3->next=L4;
        }
        return it3->next;
    }
};