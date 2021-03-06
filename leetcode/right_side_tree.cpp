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
    vector<int> rightSideView(TreeNode* root) {
        queue<TreeNode*> q;
        int size=0;
        vector<int> ans;
        if(!root) return {};
        
        q.push(root);
        while(!q.empty()){
            size=q.size();
            for(int i=0;i<size;i++){
                TreeNode* temp = q.front();
                q.pop();
                if(i==size-1) ans.push_back(temp->val);
                if(temp->left) q.push(temp->left);
                if(temp->right) q.push(temp->right);
                
            }
        }
        
        
        return ans;
    }
};

//other approach

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
    vector<int> rightSideView(TreeNode* root) {
        
        vector<int> ans;
        right(root,0,ans);
        return ans;
        
    }
    
    void right(TreeNode* root,int level,vector<int>& ans){
        if(root==NULL) return;
        
        if(level==ans.size()) ans.push_back(root->val);
        right(root->right,level+1,ans);
        right(root->left,level+1,ans);
        
        
    }
};