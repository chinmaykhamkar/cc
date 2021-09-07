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
    int sum;
public:
    TreeNode* bstToGst(TreeNode* root) {
        sum=0;
        helper(root);
        
        return root;
        
    }
    
    void helper(TreeNode* root){
        if(root == NULL) return;
        helper(root->right);
        root->val = root->val+sum;
        sum=root->val;
        helper(root->left);
    }
};