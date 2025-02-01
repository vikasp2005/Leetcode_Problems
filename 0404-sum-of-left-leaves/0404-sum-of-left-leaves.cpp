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
    int help(TreeNode* root,int &s,bool ds)
    {
        if(root==NULL) return s;

        help(root->left,s,true);
        help(root->right,s,false);
        if(ds&&root->left==NULL&&root->right==NULL) s+=root->val;
        return s;
    }
    int sumOfLeftLeaves(TreeNode* root) {
        int s=0;
        return help(root,s,false);
    }
};