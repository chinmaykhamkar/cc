void convertToWave(vector<int>& arr, int n){
        
        // Your code here
        int swaps = n/2;
        int i=0;
        while(i<n-1){
            int temp;
            temp = arr[i];
            arr[i] = arr[i+1];
            arr[i+1] = temp;
            i=i+2;
        }
    }