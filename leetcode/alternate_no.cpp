vector<int> pos, neg;
       for(int i=0;i<n;i++){
           if(arr[i]>=0){
               pos.push_back(arr[i]);
           }
           else{
               neg.push_back(arr[i]);
           }
       }
       int nx = pos.size(), mx = neg.size();
       int i=0, j=0, a=0;
       while(i<nx||j<mx){
           if(i<nx){
               arr[a++]=pos[i];
               i++;
           }
           if(j<mx){
               arr[a++]=neg[j];
               j++;
           }
       }