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
    bool hasCycle(ListNode *head) {
        ListNode* first=head;
        ListNode* second=head;
        while(second!=NULL&&second->next!=NULL)
        {
            first=first->next;
            second=second->next;
            if(second->next!=NULL)
                second=second->next;
            else
                return false;
            if(first->val==second->val)
            {
                return true;
            }
        }
        return false;
    }
};