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

TreeNode* sortedArrayToBST(vector<int>& nums) {

    return sortHelper(nums, 0, nums.size() - 1);

}

TreeNode* sortHelper(vector<int> nums, int front, int back)
{
    if(front > back)
    {
        return nullptr;
    }

    int mid = (front + back) / 2;

    TreeNode* root = new TreeNode(nums[mid]);

    root->left = sortHelper(nums, front, mid - 1);
    root->right = sortHelper(nums, mid + 1, back);

    return root;
}