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

int sumOfLeftLeaves(TreeNode* root) {

    return dfs(root);

}

int dfs(TreeNode* root)
{
    if(root == nullptr)
    {
        return 0;
    }

    int res = 0;

    if(root->left && root->left->left == nullptr && root->left->right == nullptr)
    {
        res = root->left->val;
        return dfs(root->right) + res;
    }

    return dfs(root->left) + dfs(root->right) + res;
}