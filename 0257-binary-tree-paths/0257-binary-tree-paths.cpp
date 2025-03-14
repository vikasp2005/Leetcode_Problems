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
    void help(TreeNode* root,string s,vector<string>& res){
        if(root==NULL){
            return;
        }
        s+=to_string(root->val);
        if(root->left==NULL&&root->right==NULL)
        {
            res.push_back(s);
            return;
        }
        if(root->left!=NULL) help(root->left,s+"->",res);
        if(root->right!=NULL) help(root->right,s+"->",res);

    }
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> res;
        help(root,"",res);
        return res;
    }
};