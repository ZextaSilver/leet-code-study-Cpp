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

vector<int> preorderTraversal(TreeNode* root) {

    stack<TreeNode*> stk;
    vector<int> orderList;
    TreeNode* p = root;

    while(p || !stk.empty())
    {
        if(p)
        {
            orderList.push_back(p->val);
            stk.emplace(p);
            p = p->left;
        }
        else
        {
            p = stk.top();
            stk.pop();
            p = p->right;
        }
    }

    return orderList;
}