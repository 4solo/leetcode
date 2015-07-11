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
    bool isPalindrome(ListNode* head) {
        if(head==NULL||head->next==NULL)
        {
            return true;
        }
        else
        {
            return isP(head,head);
        }
    }
    bool isP(ListNode*&left,ListNode* right)
    {
        if(right==NULL)
        return true;
        bool ha1=isP(left,right->next);
        if(!ha1) return false;
        bool ha2=left->val==right->val;
        left=left->next;
        return ha2;
    }
};