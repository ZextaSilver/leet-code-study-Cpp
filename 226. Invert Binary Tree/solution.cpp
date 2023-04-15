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

TreeNode* invertTree(TreeNode* root) {

    if(root)
    {
        revertValue(root, root->left, root->right);
    }

    return root;
}

void revertValue(TreeNode* n, TreeNode* nl, TreeNode* nr)
{
    if(nl || nr)
    {

        TreeNode* temp;
        temp = nl;
        n->left = nr;
        n->right = temp;

        if(nl)
        {
            revertValue(nl, nl->left, nl->right);
        }
        if(nr)
        {
            revertValue(nr, nr->left, nr->right);
        }
    }
    else
    {
        return;
    }

}