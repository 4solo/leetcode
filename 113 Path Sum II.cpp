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
    void findall(TreeNode* root, int sum,vector<int>&ha)
    {
        if(!root)
        {
            return;
        }
        else if(root->val==sum&&(!root->left)&&(!root->right))
        {
            ha.push_back(root->val);
            result.push_back(ha);
            ha.pop_back();
            return;
        }
        if(root->left)
        {
            ha.push_back(root->val);
            findall(root->left,sum-root->val,ha);
            ha.pop_back();
        }
        if(root->right)
        {
            ha.push_back(root->val);
            findall(root->right,sum-root->val,ha);
            ha.pop_back();
        }
        return;
    }
    vector<vector<int>> pathSum(TreeNode* root, int sum) {
        vector<int> ha;
        findall(root,sum,ha);
        return result;
    }
private:
    vector<vector<int>> result;
};