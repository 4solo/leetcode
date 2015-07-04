/**
 * Definition for binary tree with next pointer.
 * struct TreeLinkNode {
 *  int val;
 *  TreeLinkNode *left, *right, *next;
 *  TreeLinkNode(int x) : val(x), left(NULL), right(NULL), next(NULL) {}
 * };
 */
class Solution {
public:
    void connect(TreeLinkNode *root) {
        queue<TreeLinkNode*> myqueue;
        TreeLinkNode* p=root;
        int count;
        int total=0;
        if(root!=NULL)
        {
            myqueue.push(p);
            count=1;
        }
        else
            return ;
        while(!myqueue.empty())
        {
            total=count;
            count=0;
            while(total>0)
            {
                if(myqueue.front()->left!=NULL)
                {
                    myqueue.push(myqueue.front()->left);
                    count++;
                }
                if(myqueue.front()->right!=NULL)
                {
                    myqueue.push(myqueue.front()->right);
                    count++;
                }
                if(total!=1)
                {
                    p=myqueue.front();
                    myqueue.pop();
                    p->next=myqueue.front();
                }
                else
                {
                    myqueue.pop();
                }
                total--;
            }
        }
    }
};