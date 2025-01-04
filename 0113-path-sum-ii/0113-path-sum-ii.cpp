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
    vector<vector<int>> res;
    void help(TreeNode *root,int target,int s,vector<int> v)
    {
        if(root==NULL)
        {
            
            return;
        }
        if(!root->left&&!root->right)
        {
            if(s+root->val==target) {
                v.push_back(root->val);
                res.push_back(v);
            }
            return;
        }
        v.push_back(root->val);
        s+=root->val;
        help(root->left,target,s,v);
        help(root->right,target,s,v);
    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        help(root,targetSum,0,{});
        return res;
    }
};