/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
int countNodes(struct TreeNode* root){
    if (root == NULL)
        return 0;
    int lcount = countNodes(root->left);
    int rcount = countNodes(root->right);
    return 1 + lcount + rcount;
}
