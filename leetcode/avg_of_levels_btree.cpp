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
    vector<double> averageOfLevels(TreeNode* root) {
        vector<vector<double>> bfs;
        vector<double> ans;
        queue<TreeNode*> q;
        q.push(root);
        
        while(!q.empty()){
            int s = q.size();
            vector<double> temp;
            for(int i=0;i<s;i++){
                TreeNode* node = q.front();                
                q.pop();
                if(node->left) q.push(node->left);
                if(node->right) q.push(node->right);
                temp.push_back(node->val);
            }
            
            bfs.push_back(temp);
        }
    
        int i,j;
        for(i=0;i<bfs.size();i++){
            double avg=0.0;
            for(j=0;j<bfs[i].size();j++){
                // cout<<bfs[i][j]<<" ";
                avg+=bfs[i][j];                
            }
            ans.push_back(avg/bfs[i].size());
            cout<<endl;
        }
        
        // for(i=0;i<ans.size();i++){
        //     cout<<ans[i]<<" ";
        // }
        
        return ans;
        
    }
};