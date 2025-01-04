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
    bool help(TreeNode* root, int targetSum,int s)
    {
        if(root==NULL)
        {
            return false;
        }
        if(!root->left&&!root->right)
        {
            return s+root->val==targetSum;
        }
        return help(root->left,targetSum,s+root->val) || help(root->right,targetSum,s+root->val);
    }
    bool hasPathSum(TreeNode* root, int targetSum) {
        return help(root,targetSum,0);
    }
};