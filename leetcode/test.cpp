#include <iostream>
#include<bits/stdc++.h>
using namespace std;
  
// Driver Code
int main()
{
    // vector<int> temp(8,0);
    vector<vector<int>> temp(3, vector<int>(2,0));
    // temp.push_back(1);
    for(int i=0;i<temp.size();i++){
        for(int j=0;j<temp[i].size();j++){
            cout<<temp[i][j]<<" ";
        }
            cout<<endl;
    }
    return 0;
}