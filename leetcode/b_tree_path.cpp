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
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> ans;
        if(!root) return ans;
        path(root,ans,to_string(root->val));
        return ans;
    }
    
    void path(TreeNode* root,vector<string>& ans, string st){
        if(!root->left && !root->right){
            ans.push_back(st);
            return;
        }
            
        if(root->left) path(root->left,ans,st+"->"+to_string(root->left->val));
        if(root->right) path(root->right,ans,st+"->"+to_string(root->right->val));
    }
};