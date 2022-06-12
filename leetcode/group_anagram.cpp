class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        
        unordered_map<string,vector<string>> op;
        vector<vector<string>> t;
        int i;        
        for(i=0;i<strs.size();i++){
            string temp = strs[i];
            sort(strs[i].begin(),strs[i].end());
            op[strs[i]].push_back(temp);
        }
        for(auto ele:op){
            t.push_back(ele.second);
        }
        
        return t;
        
        
//         vector<vector<string>> op;
//         vector<string> temp;
//         unordered_map<string,int> flag;
//         if(strs.size() == 1){
//             return {{strs[0]}};
//         }
//         int i,j;
//         for(i=0;i<strs.size();i++){
//             flag[strs[i]] = 0;
//         }
       
       
        
        
//         for(i=0;i<strs.size();i++){
//             string temp1 = strs[i];
//             if(flag[strs[i]] == 0){
//                 for(j=i;j<strs.size();j++){
//                     string temp2 = strs[j];
//                     sort(temp1.begin(),temp1.end());
//                     sort(temp2.begin(),temp2.end());
//                     // cout<<j<<" "<<temp1<<" "<<temp2<<endl;
//                     if(temp1 == temp2){
//                         if(strs[i] != strs[j]){
//                             temp.push_back(strs[j]);
//                             flag[strs[j]] = 1;
//                         }
//                         else{
//                             temp.push_back(strs[i]);
//                             flag[strs[j]] = 1;
//                           }
//                       }
                      
//                 }
               
               
               
//                 op.push_back(temp);
                
               
//                 temp.clear();
//             }    
            
//         }
//         return op;
    }
};