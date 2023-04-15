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

int maxDepth(TreeNode* root) {

    TreeNode* leftPtr = root;
    TreeNode* rightPtr = root;

    //null pointer condition
    if(root == nullptr)
    {
        return 0;
    }

    int leftRoot = maxDepth(root->left);
    int rightRoot = maxDepth(root->right);

    // while(leftPtr->left != nullptr)
    // {
    //     leftPtr = leftPtr->left;
    //     leftRoot++;
    // }

    // while(rightPtr->right != nullptr)
    // {
    //     rightPtr = rightPtr->right;
    //     rightRoot++;
    // }
    
    return max(leftRoot + 1, rightRoot + 1);
}