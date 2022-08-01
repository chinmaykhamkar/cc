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
    int widthOfBinaryTree(TreeNode* root) {
        int ans = INT_MIN;
        if(!root) return 0;
        
        queue<pair<TreeNode*,int>> q;
        
        q.push({root,0});
        
        
        while(!q.empty()){
            int size = q.size();
            int minidx = q.front().second;
            int first,last;
            for(int i=0;i<size;i++){
                long long int curridx = q.front().second - minidx;
                TreeNode* node = q.front().first;
                q.pop();
                if(i==0) first = curridx;
                if(i==size-1) last = curridx;
                if(node->left) q.push({node->left,2*curridx+1});
                if(node->right) q.push({node->right,2*curridx+2});
                
            }
            
            ans = max(ans,last-first+1);
            
            
        }
        
        
        return ans;
        
    }
};