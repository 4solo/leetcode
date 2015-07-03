/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    vector<int> preorderTraversal(TreeNode* root) {
        TreeNode *p =root;
        stack<TreeNode *> mystack;
        vector<int> myvector;
        if(p==NULL)
        return myvector;
        else
        {
            while(!mystack.empty()||p!=NULL)
            {
                if(p!=NULL)
                {
                    myvector.push_back(p->val);
                    mystack.push(p);
                    p=p->left;

                }
                else
                {
                    p=mystack.top();
                    mystack.pop();
                    p=p->right;
                }
            }
            return myvector;
        }
    }
};