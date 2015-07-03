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
    bool isValidBST(TreeNode* root) {
        if(root==NULL)
            return true;
        else
        {
            inorder(root);
            for(int i=1;i<myvector.size();i++)
            {
                if(myvector[i]<=myvector[i-1])
                {
                    return false;
                }
            }
            return true;
        }
    }
    void inorder(TreeNode* root)
    {
        if(root==NULL)
            return;
        else
        {
            inorder(root->left);
            myvector.push_back(root->val);
            inorder(root->right);
        }
    }
private:
vector<int> myvector;
};