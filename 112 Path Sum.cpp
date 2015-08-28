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
    bool Pathsum(TreeNode* root, int sum)
    {
        if(root->left==NULL&&root->right==NULL)
        {
            if(root->val==sum)
                return true;
            else
                return false;
        }
        bool l=false,r=false;
        if(root->left!=NULL)
        {
            l=Pathsum(root->left,sum-root->val);
        }
        if(root->right!=NULL)
        {
            r=Pathsum(root->right,sum-root->val);
        }
        return l||r;
    }
    bool hasPathSum(TreeNode* root, int sum) {
        if(root==NULL) return false;
        return Pathsum(root,sum);
    }
};