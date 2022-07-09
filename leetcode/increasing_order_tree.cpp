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
    TreeNode* ans = new TreeNode(0);
    TreeNode* store = ans;

void inorder(TreeNode* root){
    if(root == NULL) return;
    inorder(root->left);
    TreeNode* temp = new TreeNode(root->val);
    temp->left = NULL;
    temp->right = NULL;
    ans->right = temp;
    ans = temp;
    inorder(root->right);
}
public:
    TreeNode* increasingBST(TreeNode* root) {
       inorder(root);
        return store->right;
    }
    
   
};