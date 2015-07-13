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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int lengthA=0;
        int lengthB=0;
        ListNode* it=headA;
        while(it!=NULL)
        {
            lengthA++;
            it=it->next;
        }
        it=headB;
        while(it!=NULL)
        {
            lengthB++;
            it=it->next;
        }
        int different=abs(lengthA-lengthB);
        ListNode* it1=headA;
        ListNode* it2=headB;
        while(lengthA>lengthB&&different>0)
        {
            it1=it1->next;
            different--;
        }
        while(lengthA<lengthB&&different>0)
        {
            it2=it2->next;
            different--;
        }
        while(it1!=NULL&&it2!=NULL)
        {
            if(it1->val==it2->val)
            {
                return it1;
            }
            it1=it1->next;
            it2=it2->next;
        }
        return NULL;

    }
};