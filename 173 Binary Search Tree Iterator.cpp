/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class BSTIterator {
public:
    BSTIterator(TreeNode *root) {
        myroot=root;
        while(myroot)
        {
            mystack.push(myroot);
            myroot=myroot->left;
        }
    }
    
    /** @return whether we have a next smallest number */
    bool hasNext() {
        return !mystack.empty();
    }
    
    /** @return the next smallest number */
    int next() {
        myroot=mystack.top();
        mystack.pop();
        int a=myroot->val;
        myroot=myroot->right;
        while(myroot)
        {
            mystack.push(myroot);
            myroot=myroot->left;
        }
        
        return a;
    }
private:
    TreeNode *myroot;
    stack<TreeNode *> mystack;
};

/**
 * Your BSTIterator will be called like this:
 * BSTIterator i = BSTIterator(root);
 * while (i.hasNext()) cout << i.next();
 */