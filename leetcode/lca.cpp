/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        vector<int> store1;
        vector<int> store2;
        int i,j;
        if(path(root,store1,p)){
            for(i=0;i<store1.size();i++){
                cout<<store1[i]<<" ";
            }
        }
        cout<<endl;
        if(path(root,store2,q)){
            for(i=0;i<store2.size();i++){
                cout<<store2[i]<<" ";
            }
        }
        int s1=store1.size();
        int s2=store2.size();
        i=0;
        j=0;
        while(i<s1 && j<s2){
            if(store1[i]==store2[j]){
                i++;
                j++;
            }
            else break;
        }
        
        int ans = store1[i-1];
        TreeNode* a = new TreeNode(ans);
        return a;
        
        
        
    }
    
    bool path(TreeNode* node,vector<int>& store,TreeNode* t){
        if(!node) return false;
        store.push_back(node->val);
        if(node == t){            
            return true;
        }
        
        if(path(node->left,store,t) || path(node->right,store,t)){
            return true;
        }
        store.pop_back();
        return false;
    }
};