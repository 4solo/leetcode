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
    ListNode* reverseList(ListNode* head) {
        stack<int> mystack;
        while(head!=NULL)
        {
            mystack.push(head->val);
            head=head->next;
        }
        if(mystack.empty())
        {
            return head;
        }
        ListNode* L=new ListNode(0);
        ListNode* res=L;
        while(!mystack.empty())
        {
            L->next=new ListNode(mystack.top());
            L=L->next;
            mystack.pop();
        }
        return res->next;
    }
};