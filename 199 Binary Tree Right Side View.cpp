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
    vector<int> rightSideView(TreeNode* root) {
        vector<int> result;
        queue<TreeNode*> tree;
        if(root==NULL)
            return result;
        tree.push(root);
        int count=0;
        int time=1;
        while(!tree.empty())
        {
            while(time)
            {
                if(tree.front()->left!=NULL)
                {
                    tree.push(tree.front()->left);
                    count++;
                }
                if(tree.front()->right!=NULL)
                {
                    tree.push(tree.front()->right);
                    count++;
                }
                if(time==1)
                {
                    result.push_back(tree.front()->val);
                }
                time--;
                tree.pop();
            }
            time=count;
            count=0;
        }
        return result;
    }
};