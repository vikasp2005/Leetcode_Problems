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
class Solution {
public:
    bool valid(TreeNode* root,int n)
    {
        if(root==NULL) return true;
        bool left=valid(root->left,n),right=valid(root->right,n);
        return left&&right&&(root->val==n);

    }
    bool isUnivalTree(TreeNode* root) {
        if(root==NULL) return true;
        if(root->left==NULL&&root->right==NULL) return true;
        return valid(root,root->val);
    }
};