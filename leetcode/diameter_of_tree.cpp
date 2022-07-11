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
    int ans = INT_MIN;
public:
    int diameterOfBinaryTree(TreeNode* root) {
        int ans = 0;
        dia(root,ans);
        return ans;
    }
     int dia(TreeNode* node,int& ans){
        if(node==NULL) return 0;
        int ls = dia(node->left,ans);
        int rs = dia(node->right,ans);
        ans = max(ans,ls+rs); 
        return max(ls,rs)+1;
    }
    
};