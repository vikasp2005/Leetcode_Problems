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
    string ans;
    void help(TreeNode* root,string s){
        if(root->left==NULL&&root->right==NULL) {
            s+=char('a'+root->val);
            reverse(s.begin(),s.end());
            if(ans==""||s<ans) ans=s;
            return;
        }
        if(root->left)
        help(root->left,s+char('a'+root->val));
        if(root->right)
        help(root->right,s+char('a'+root->val));
        return;

    }
    string smallestFromLeaf(TreeNode* root) {
        help(root,"");
        return ans;
    }
};