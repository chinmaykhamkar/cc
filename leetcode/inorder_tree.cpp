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
    vector<int> inorderTraversal(TreeNode* root) {
       
        vector<int> op;
        inorder(root,op);
        return op;
    }
    
    void inorder(TreeNode* root,vector<int>& op){
        if(root == NULL) return;
        inorder(root->left,op);
        op.push_back(root->val);
        inorder(root->right,op);
        
     }
};