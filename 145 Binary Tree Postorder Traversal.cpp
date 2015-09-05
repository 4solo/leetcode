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
    vector<int> postorderTraversal(TreeNode* root) {
        stack<TreeNode*> mystack;
        vector<int> result;
        if(root==NULL) return result;
        mystack.push(root);
        TreeNode* current;
        TreeNode* pre=NULL;
        while(!mystack.empty())
        {
            current=mystack.top();
            if((!current->left&&!current->right)||(pre&&(pre==current->left||pre==current->right)))
            {
                result.push_back(current->val);
                mystack.pop();
                pre=current;
            }
            else
            {
                if(current->right)
                {
                    mystack.push(current->right);
                }
                if(current->left)
                {
                    mystack.push(current->left);
                }
            }
            
        }
        return result;
    }
    
};