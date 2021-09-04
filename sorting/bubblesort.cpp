#include <bits/stdc++.h>
using namespace std;
void bubble_sort(vector<int>& arr){
    int i,j,n=arr.size();
    for(i=0;i<n-1;i++){
        for(j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}

int main(){
    vector<int> arr={9,4,3,6,7,1,2,76,34,21,10};
    bubble_sort(arr);
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}

//time complexity O(n^2)