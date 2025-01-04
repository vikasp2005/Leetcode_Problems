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
    int minDepth(TreeNode* root) {
        if(root==NULL) return 0;
        queue<TreeNode*> q;
        q.push(root);
        int level=0;
        while(!q.empty())
        {
            int count=q.size();
            while(count)
            {
               TreeNode *curr=q.front();
               q.pop();
               if(curr->left==curr->right) return ++level;
               if(curr->left) q.push(curr->left);
               if(curr->right) q.push(curr->right);
               count--;
            }
          level++;
        }
        return level;
    }
};