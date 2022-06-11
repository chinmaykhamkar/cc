#include <iostream>
#include<bits/stdc++.h>
using namespace std;
  
// Driver Code
int main()
{

        vector<vector<string>> op;
        vector<string> temp;
        unordered_map<string,int> flag;
        int i,j;
        for(i=0;i<strs.size();i++){
            flag[strs[i]] = 0;
        }
        print(flag);
        // for(i=0;i<strs.size();i++){
        //     string temp1 = strs[i];
        //     if(flag[strs[i]] == 0){
        //         for(j=i;j<strs.size();j++){
        //             string temp2 = strs[j];
        //             sort(temp1.begin(),temp1.end());
        //             sort(temp2.begin(),temp2.end());
        //             if(temp2 == temp2 && strs[i] != strs[j]){
        //                 temp.push_back(strs[j]);
        //                 flag[strs[j]] = 1;
        //               }
        //             else{
        //                 temp.push_back(strs[i]);
        //               }
        //         }
        //         cout<<temp<<endl;
        //         op.push_back(temp);
        //         temp.clear();
        //     }    
            
        // }
        
        return 0;
}
