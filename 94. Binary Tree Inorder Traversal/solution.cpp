/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

vector<int> inorderTraversal(TreeNode* root) {

    vector<int> inorderVector;
    stack<TreeNode*> stk;

    //set a ptr to root
    TreeNode* p = root;

    // while stack not empty, keep checking
    while(p || !stk.empty())
    {
        // inorder: lchild, node, rchild
        if(p)
        {
            stk.emplace(p);
            p = p->left;
        }
        else
        {
            p = stk.top();
            stk.pop();
            inorderVector.push_back(p->val);
            p = p->right;
        }
    }

    return inorderVector;
}