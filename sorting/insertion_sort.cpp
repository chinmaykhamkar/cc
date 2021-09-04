#include <bits/stdc++.h>
using namespace std;

void insertion_sort(vector<int> &arr){
    int i,j,n=arr.size();
    
}

int main(){
    vector<int> arr={9,4,3,6,7,1,2,76,34,21,10};
    insertion_sort(arr);
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    return 0;

}

//time complexity O(n^2)