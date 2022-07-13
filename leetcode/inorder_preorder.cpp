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

    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
      
        int i,n=inorder.size(),m=preorder.size();       
        
        TreeNode* root = build(0,n-1,inorder,0,m-1,preorder);
        return root;
    }
    // pre = [3,9,20,15,7] m
    //in   = [9,3,15,20,7] n
    TreeNode* build(int instart,int inend,vector<int>& inorder,int prestart,int prend,vector<int>& preorder){
        
        if(instart>inend || prestart>prend) return NULL;
        
        TreeNode* node = new TreeNode(preorder[prestart]);
        int pivot;
        for(int i = 0; i < inorder.size(); i++) {
            if(inorder[i] == node->val) {
                pivot = i;
                break;
            }
        }
        int innode = pivot;
        int left = innode-instart;
        node->left = build(instart,innode-1,inorder,prestart+1,prestart+left,preorder);
        node->right = build(innode+1,inend,inorder,prestart+left+1,prend,preorder);
        
        return node;
    }
};