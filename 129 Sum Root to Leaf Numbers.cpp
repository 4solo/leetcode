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
    void findall(TreeNode* root,int& number)
    {
        number=number*10+root->val;
        int right=number;
        if(root->left==NULL&&root->right==NULL)
        {
            sum=sum+number;
            return;
        }
        if(root->left!=NULL)
            findall(root->left,number);
        if(root->right!=NULL)
            findall(root->right,right);
    }
    int sumNumbers(TreeNode* root) {
        sum=0;
        int ha=0;
        if(root==NULL) return 0;
        findall(root,ha);
        return sum;
    }
private:
    int sum;
    
};