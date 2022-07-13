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
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        int n=inorder.size();
        int i;
        //instart,inend,poststart,postend,inorder,postorder
        TreeNode* root = build(0,n-1,0,n-1,inorder,postorder);
        return root;
    }
    
    TreeNode* build(int instart,int inend,int poststart,int postend,vector<int>& inorder, vector<int>& postorder){
        if(instart>inend || poststart>postend) return NULL;
        
        TreeNode* node = new TreeNode(postorder[postend]);
        int pivot;
        for(int i=0;i<inorder.size();i++){
            if(inorder[i] == node->val){
                pivot = i;
                break;
            }
        }
        
        int innode = pivot;
        int left = innode-instart;
        node->left = build(instart,innode-1,poststart,poststart+left-1,inorder,postorder);
        node->right = build(innode+1,inend,poststart+left,postend-1,inorder,postorder);
        
        return node;
        
    }
};