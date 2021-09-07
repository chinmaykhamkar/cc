#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> a={9,4,3,6,7,1,2,76,34,21,10};
    int i,j,n=a.size(),index;
        for(i=0;i<n-1;i++){
        index=i;
        for(j=i+1;i<n;j++){
            if(a[j]<a[index]){
                index=j;
            }

        }
        swap(a[i],a[index]);        

    }
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
    cout<<a.size();

    return 0;
    
}

//time complexity O(n^2)