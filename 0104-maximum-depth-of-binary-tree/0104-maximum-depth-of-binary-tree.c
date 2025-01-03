/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
 int max(int n1,int n2)
 {
    return n1>n2?n1:n2;
 }
int maxDepth(struct TreeNode* root) {
    if(root==NULL)
    {
        return 0;
    }
    return max(maxDepth(root->left),maxDepth(root->right))+1;
}