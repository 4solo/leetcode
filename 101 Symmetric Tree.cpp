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
    bool issymmetric(TreeNode* left2, TreeNode* right2)
    {
        if(left2==NULL&&right2==NULL) return true;
        else if(left2!=NULL&&right2==NULL) return false;
        else if(left2==NULL&&right2!=NULL) return false;
        else if(left2->val!=right2->val) return false;
        else return issymmetric(left2->left,right2->right)&&issymmetric(left2->right,right2->left);
    }
    bool isSymmetric(TreeNode* root) {
        if(root==NULL) return true;
        return issymmetric(root->left,root->right);
    }
    
};