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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        if(!root) return {};
        if(!root->left && !root->right) return {{root->val}};        
        vector<vector<int>> ans;
        queue<TreeNode*> q;
        q.push(root);
        int i,level=0;
        while(!q.empty()){
            int s = q.size();
            vector<int> temp;
            for(i=0;i<s;i++){
                TreeNode* node = q.front();
                if(node->left) q.push(node->left);
                if(node->right) q.push(node->right);
                q.pop();
                temp.push_back(node->val);
            }
            if(level%2 == 0){
                ans.push_back(temp);
            }
            else{
                reverse(temp.begin(),temp.end());
                ans.push_back(temp);
            }
            level++;
            
        }
        
        return ans;
    }
};