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
    bool isBalanced(TreeNode* root) {
        if(root==NULL)
        {
            return true;
        }
        if(height(root->left)-height(root->right)<=1&&height(root->left)-height(root->right)>=-1)
        {
            return true;
        }
        else
            return false;
    }
    int height(TreeNode* boot)
    {
        if(boot==NULL)
        {
            return 0;
        }
        else
        {
            return 1+max(height(boot->left),height(boot->right));
        }
    }
};