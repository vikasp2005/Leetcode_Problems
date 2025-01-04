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
    vector<int> v;
    void help(TreeNode *root,int val)
    {
       if(root==NULL)
       {
         return ;
       }
       if(root->left==NULL&&root->right==NULL)
       {
            v.push_back(val*10+root->val);
            return;
       }
       help(root->left,val*10+root->val);
       help(root->right,val*10+root->val);
       

    } 
    int sumNumbers(TreeNode* root) {

        help(root,0);
        int res=0;
        for(auto i:v)
        {
            res+=i;
        }
        return res;
    }
};