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
    int goodNodes(TreeNode* root) {
        int ans=0;
        helper(root,root->val,ans);
        return ans;
    }
    
    void helper(TreeNode* root,int maxval,int &ans){
        if(!root) return;
        
        if(root->val>=maxval){
            maxval = root->val;
            ans++;
        }
        
        helper(root->left,maxval,ans);
        helper(root->right,maxval,ans);
    }
};