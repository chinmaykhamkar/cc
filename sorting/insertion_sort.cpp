#include <bits/stdc++.h>
using namespace std;
void insertion_sort(vector<int>& a){
    int i,j,n=a.size();
    int temp;
    for(i=1;i<n;i++){
        temp = a[i];
        j=i-1;
        while(temp<=a[j]){
            a[j+1]=a[j];
            j=j-1;
        }
        a[j+1]=temp;

    }
}

int main(){
    vector<int> a={94,21,10};
    insertion_sort(a);
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
    return 0;

}

//time complexity O(n^2)
//  j i
//  4,9,3,6,7,1,2,76,34,21,10
//   t=4  