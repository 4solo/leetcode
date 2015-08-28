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
    void findall(TreeNode* root, string &a)
    {
        int val=root->val;
        string ha=to_string(val);
        if(a.size()!=0)
            a=a+"->"+ha;
        else
            a=ha;
        if(root->left==NULL&&root->right==NULL)
        {
            result.push_back(a);
            return;
        }
        string b=a;
        if(root->left!=NULL)
            findall(root->left,a);
        if(root->right!=NULL)
            findall(root->right,b);
    }
    vector<string> binaryTreePaths(TreeNode* root) {
        string ha;
        if(root==NULL) return result;
        findall(root,ha);
        return result;
    }
private:
    vector<string> result;
};