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
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        int size=nums.size();
        if(size==0)
        {
            return NULL;
        }
        if(size==1)
        {
            TreeNode* Node=new TreeNode(nums[0]);
            return Node;
        }
        int begin=0;
        int end=size-1;
        int mid=size/2;
        TreeNode* head =new TreeNode(nums[mid]);
        vector<int> left;
        vector<int> right;
        for(int i=0;i<mid;i++)
        {
            left.push_back(nums[i]);
        }
        for(int i=mid+1;i<=end;i++)
        {
            right.push_back(nums[i]);
        }
        TreeNode* leftnode=sortedArrayToBST(left);
        TreeNode* rightnode=sortedArrayToBST(right);
        head->left=leftnode;
        head->right=rightnode;
        return head;
    }
};