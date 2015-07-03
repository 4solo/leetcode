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
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        vector<int> temp;
        stack<vector<int>> mystack;
        vector<vector<int>> list;
        queue<TreeNode*> myqueue;
        myqueue.push(root);
        int total=0;
        int count=1;
        int i=0;
        if(root==NULL)
        {
            return list;
        }
        else
        {
            while(!myqueue.empty())
            {
                i=0;
                total=0;
                temp.clear();
                while(i<count)
                {
                    TreeNode* it=myqueue.front();
                    temp.push_back(it->val);
                    TreeNode* left=it->left;
                    TreeNode* right=it->right;
                    if(left!=NULL)
                    {
                        myqueue.push(left);
                        total++;
                    }
                    if(right!=NULL)
                    {
                        myqueue.push(right);
                        total++;
                    }
                    myqueue.pop();
                    i++;
                }
                count=total;
                mystack.push(temp);
            }
            while(!mystack.empty())
            {
                list.push_back(mystack.top());
                mystack.pop();
            }
            return list;
        }
    }
};