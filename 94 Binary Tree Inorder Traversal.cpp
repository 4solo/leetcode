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
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> myvector;
        stack<TreeNode*> mystack;
        TreeNode* p=root;
        if(root==NULL)
        return myvector;
        else
        {
          while(!mystack.empty()||p!=NULL)
          {
              if(p!=NULL)
              {
                  mystack.push(p);
                  p=p->left;
              }
              else
              {
                  p=mystack.top();
                  mystack.pop();
                  myvector.push_back(p->val);
                  p=p->right;
              }
          }
          return myvector;
        }
    }
};