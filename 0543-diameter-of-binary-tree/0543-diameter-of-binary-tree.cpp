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
#include<algorithm>
class Solution {
public:
    int getheight(TreeNode *root)
    {
        if(root==NULL) return 0;

        int lw=getheight(root->left);
        int rw=getheight(root->right);

        return (lw>rw?lw:rw)+1;
    } 
    int diameterOfBinaryTree(TreeNode* root) {
        if(root==NULL) return 0;

        int lh=getheight(root->left);
        int rh=getheight(root->right);

        int lw=diameterOfBinaryTree(root->left);
        int rw=diameterOfBinaryTree(root->right);
    

        return max({lw,rw,lh+rh});
    }
};