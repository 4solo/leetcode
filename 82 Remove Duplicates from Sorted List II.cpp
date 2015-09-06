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
        if(!head) return NULL;
        ListNode* Next=head->next;
        if(!Next) return head;
        if(head->val!=Next->val)
        {
            head->next=deleteDuplicates(Next);
        }
        else
        {
            while(Next)
            {
                if(head->val==Next->val)
                {
                    Next=Next->next;
                }
                else
                {
                    head=Next;
                    head=deleteDuplicates(head);
                    break;
                }
            }
            if(!Next) return NULL;
        }
        return head;
        
    }
    
};